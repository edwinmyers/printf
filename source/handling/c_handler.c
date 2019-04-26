/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 16:01:33 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/26 13:55:58 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		c_handler(t_fs *form_string, int arg, char **format)
{
	char	*substr;

	substr = ft_strnew(1);
	*substr = (char)arg;
	if (*substr == '\0')
		form_string->width--;
	width_insert(form_string, &substr);
	*format = substr;
}
