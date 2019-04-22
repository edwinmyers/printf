/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:10:34 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/22 21:46:21 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	bin_to_dec(num);
	rround(num, form_string->precision);
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
	if(ft_strchr(form_string->flags, ' ') && sign != '-')
		add_sign(&str, ' ');
	*format = str;
}
