/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparker <nparker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:35:29 by nparker           #+#    #+#             */
/*   Updated: 2019/04/24 14:58:58 by nparker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			fs_init(t_fs *fs)
{
	fs->flags = NULL;
	fs->size = NULL;
	fs->precision = 0;
	fs->type = 0;
	fs->width = 0;
}

int				find_the_flags(char **str)
{
	int			i;

	i = 0;
	while (((*str)[i] && !ft_isalpha((*str)[i])) ||
			((*str)[i] == 'l' || (*str)[i] == 'L' || (*str)[i] == 'h'))
	{
		if ((*str)[i + 1] && (*str)[i + 1] == '%')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

void			get_queue(char *format, t_queue *queue)
{
	char		*str;
	int			i;
	char		*temp;

	while (format && ft_strchr(format, '%'))
	{
		i = 0;
		str = ft_strsub(format, 0, ft_strchr(format, '%') - format);
		if (*str)
			queue_push(queue, str);
		ft_strdel(&str);
		temp = format;
		format = ft_strchr(format, '%');
		i = find_the_flags(&format);
		str = ft_strsub(format, 0, i + 1);
		queue_push(queue, str);
		ft_strdel(&str);
		format = format + i + 1;
	}
	i = 0;
	while (format[i])
		i++;
	str = ft_strsub(format, 0, i);
	queue_push(queue, str);
//    ft_strdel(&str);
}

void			decide(t_queue *q, t_string *cust_str, va_list *args)
{
	char		*str;
	t_fs		form_string;
	int			i;
	char		*temp;

	fs_init(&form_string);
	while (q->size)
	{
		i = 0;
		if (!ft_strchr(str = queue_pop(q), '%'))
			str_pushstr(cust_str, str);
		else
		{
			temp = str;
			str = ft_strdup(temp + 1);
			ft_strdel(&temp);
			get_fs(&str, &form_string);
			prepare_item(&form_string);
			handler_item(args, &form_string, &str);
			str_pushstr(cust_str, str);
		}
		ft_strdel(&str);
	}
	fs_destroy(&form_string);
}

int					ft_printf(char *format, ...)
{
	va_list			args;
	t_string		str;
	t_queue			queue;

	if (!format || *format == '\0')
		return (0);
	va_start(args, format);
	queue_create(&queue);
	get_queue(format, &queue);
	str = str_create_size(ft_strlen(queue.tail->data));
	decide(&queue, &str, &args);
	write(1, str.data, str.size);
	free(str.data);
	return ((int)str.size);
}
