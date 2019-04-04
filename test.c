/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:51:56 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/04 17:17:13 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "queue.h"

void get_queue(char *format, t_queue *queue)
{
	char *str;
	int i;

	i = 0;
	while (format[i] && ft_strchr(format + i, '%'))
	{
		str = ft_strsub(format, 0, ft_strchr(format + i, '%') - format);
		if (*str)
			queue_push(queue, str);
		i = ft_strchr(format + i, '%') - format;
		while (format[i] && !ft_isalpha(format[i]))
		{
			if (format[i + 1] && format[i + 1] == '%')
			{
				i++;
				break;
			}
			i++;
		}
		str = ft_strsub(format + i, 0, i + 1);
		queue_push(queue, str);
		// format = format + i + 1;
	}
	i = 0;
	while (format[i])
		i++;
	str = ft_strsub(format, 0, i);
	queue_push(queue, str);

}

int main()
{
	t_queue queue;
	char *str;
	int i;
	t_char_vec cvec;
	t_fs form_string;

	i = 0;
	queue_create(&queue);
	get_queue("sfdsf%dshdihsif%d ", &queue);
	cvec = ft_cvec_create(ft_strlen(queue.tail->data));
	// while (i < queue.size)
	// {
	// 	if (!ft_strchr(str = queue_pop(queue), '%'))
	// 	{
	// 		while (str[i])
	// 		ft_cvec_push_back(&cvec, str[i++]);
	// 	}
	// 	else 
	// 	{
	// 		str = queue_pop(queue);
	// 		get_fs(&str, &form_string);
	// 		prepare_item(&form_string);
	// 		handler_item(args, &form_string, &str);
	// 		while (str[i])
	// 		ft_cvec_push_back(&cvec, str[i++]);
	// 	}
	// }

}