/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 11:15:10 by jblue-da          #+#    #+#             */
/*   Updated: 2019/04/23 20:03:34 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


void num_insert(char **substr, long long arg, t_fs *form_string)
{
	char *number;

	number = ft_ltoa(arg);
	if (arg < 0)
		del_minus(&number);
	*substr = number;
}

void d_handler(t_fs *form_string, long long arg, char **format)
{
	char *substr;
	char sign;

	substr = NULL;
	cast(form_string, &arg);
	sign = get_sign(form_string, arg);
	num_insert(&substr, arg, form_string);
	if (form_string->precision > 0)
		precision_insert(form_string, &substr);
	if (sign == '-')
		add_sign(&substr, '-');
	else if (sign == '+')
		add_sign(&substr, '+');
	if (form_string->precision == 0 && arg == 0)
		ft_bzero(substr, 1);
	width_insert(form_string, &substr);
	if(ft_strchr(form_string->flags, ' ') && sign != '-')
		add_sign(&substr, ' ');
	*format = substr;
}
