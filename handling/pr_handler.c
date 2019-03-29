/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:40:32 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/29 13:58:17 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			pr_handler(t_fs *form_string, char args, char **format)
{
	char *temp;

	temp = ft_strchr(*format, '%') + 1;
	while (*temp != '%')
		temp++;
	width_insert(form_string, &temp);
	ft_replace(format, temp);
}
