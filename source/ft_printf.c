/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:35:29 by nparker           #+#    #+#             */
/*   Updated: 2019/04/26 14:46:03 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void		get_queue(char *format, t_queue *queue)
{
	char *str;
	int i;
	char *temp;

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
}

void 	decide(t_queue *q, t_string *cust_str, va_list *args)
{
	char *str;
	t_fs form_string;
	int i;
	char *temp;

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
			process_fs(&str, &form_string, args);
			if (str)
				str_pushstr(cust_str, str);
			if (!find_exclusion_of_letter(str, ' ', '\0') && form_string.type == 'c')
				str_pushchar(cust_str, '\0');
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

	if (!format || *format == '\0' || (ft_strlen(format) == 1 && *format == '%'))
		return (0);
	va_start(args, format);
	queue_create(&queue);
	get_queue(format, &queue);
	str = str_create_size(ft_strlen(queue.tail->data));
	decide(&queue, &str, &args);
	write(1, str.data, str.size);
	ft_strdel(&str.data);
	return ((int)str.size);
}
