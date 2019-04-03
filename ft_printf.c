/* ************************************************************************** */
/*                                                                                        */
/*                                                                 :::       ::::::::   */
/*   ft_printf.c                                              :+:       :+:    :+:   */
/*                                                            +:+ +:+          +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>           +#+  +:+        +#+         */
/*                                                        +#+#+#+#+#+   +#+            */
/*   Created: 2019/03/18 13:28:29 by jblue-da           #+#    #+#               */
/*   Updated: 2019/03/26 15:44:44 by vice-wra          ###   ########.fr        */
/*                                                                                        */
/* ************************************************************************** */

#include "ft_printf.h"


void get_queue(char *format, t_queue *queue)
{
	char *str;
	int i;

	while (format && ft_strchr(format, '%'))
	{
		i = 0;
		str = ft_strsub(format, 0, ft_strchr(format, '%') - format);
		if (*str)
			queue_push(queue, str);
		format = ft_strchr(format, '%');
		while (format[i] && !ft_isalpha(format[i]))
		{
			if (format[i + 1] && format[i + 1] == '%')
			{
				i++;
				break;
			}
			i++;
		}
		str = ft_strsub(format, 0, i + 1);
		queue_push(queue, str);
		format = format + i + 1;
	}
	i = 0;
	while (format[i])
		i++;
	str = ft_strsub(format, 0, i);
	queue_push(queue, str);
}

void decide(t_queue *q, t_char_vec *cvec, va_list *args)
{
	char *str;
	int i;
	t_fs form_string;
	int j;
	
	i = 0;
	while (q->size)
	{
		j = 0;
		if (!ft_strchr(str = queue_pop(q), '%'))
		{
			while (str[j])
				ft_cvec_push_back(cvec, str[j++]);
		}
		else 
		{
			str++;
			get_fs(&str, &form_string);
			prepare_item(&form_string);
			handler_item(args, &form_string, &str);
			while (str[j])
				ft_cvec_push_back(cvec, str[j++]);
		}
	}
}


int					ft_printf(char *format, ...)
{
	va_list			args;	
	t_char_vec		cvec;
	t_queue			queue;

	va_start(args, format);
	queue_create(&queue);
	get_queue(format, &queue);
	cvec = ft_cvec_create(ft_strlen(queue.tail->data));
	decide(&queue, &cvec, &args);
	
	write(1, cvec.str, cvec.size);
	return ((int)0);
}

#include <stdio.h>
int main()
{
	int i;
	long long p;
	i = 4;
	
	p = (long long)&i;
	ft_printf("%03d\n", 3);
	printf("%03d", 3);
}

// parse(format, &form_strings);
// 	prepare(&form_strings);
// 	handler(&args, &form_strings, &format);