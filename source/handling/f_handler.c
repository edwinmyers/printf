/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:10:34 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/26 13:46:57 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char			*put_bignum_strings_into_one(t_bignum *num,
											t_fs *form_string, char sign)
{
	char	*str;

	if (form_string->precision == 0)
		str = cust_strdup(&num->int_part);
	else
		str = ft_strjoin(cust_strjoin_left(&num->int_part, "."),
		ft_strsub(cust_strdup(&num->frac_part), 0, form_string->precision));
	if (sign == '-')
		add_sign(&str, '-');
	else if (sign == '+')
		add_sign(&str, '+');
	if (ft_strchr(form_string->flags, ' ') && sign != '-')
		add_sign(&str, ' ');
	width_insert(form_string, &str);
	return (str);
}

void			f_handler(t_fs *form_string, double arg, char **format)
{
	char		sign;
	t_bignum	*num;
	char		*str;

	sign = f_get_sign(form_string, arg);
	if (form_string->precision == -1)
		form_string->precision = 6;
	num = get_the_bits(arg);
	bin_to_dec(num);
	rround(&num, form_string->precision);
	str = put_bignum_strings_into_one(num, form_string, sign);
	if (ft_strchr(form_string->flags, '#') && form_string->precision == 0)
		*format = ft_strjoin(str, ".");
	else
		*format = str;
}
