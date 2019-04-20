/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:10:34 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/20 19:43:53 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char f_get_sign(t_fs *form_string, long double arg)
{
	char sign;

	if (arg >= 0 && ft_strchr(form_string->flags, '+'))
		sign = '+';
	else if (arg > 0)
		sign = 0;
	else if (arg < 0)
		sign = '-';
	return (sign);		
}

void do_bignum_arithm(t_bignum *num, int precision)
{
	do_int_part(num);
	do_frac_part(num, precision);
}

void	f_handler(t_fs *form_string, double arg, char **format)
{
	char *str;
	char sign;
	t_bignum *num;

	sign = f_get_sign(form_string, arg);
	if (arg < 0)
		arg = arg * -1.0;
	if (form_string->precision == -1)
		form_string->precision = 6;
	num = get_the_bits(arg);
	do_bignum_arithm(num, form_string->precision);
	if (form_string->precision > 0)
	{
		str = cust_strjoin_left(&num->int_part, ".");
		str = cust_strjoin_right(str, &num->frac_part);
	}
	else 
		str = cust_strdup(&num->int_part);
	if (sign == '-')
		add_sign(&str, '-');
	else if (sign == '+')
		add_sign(&str, '+');
	width_insert(form_string, &str);
	*format = str;
}
