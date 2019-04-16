/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:10:34 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/16 15:13:47 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void f_cast(t_fs *form_string, long double *arg)
{
	if (form_string->size == NULL)
        *arg = (double)*arg;
}

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
void do_bignum_arithm(t_bignum *num)
{
	int i;
	int j;
	char c;
	t_bignum sum;
	t_bignum a1;

	i = 0;
	while (i < n3.int_part.size)
	{
		j = 0;
		t_bignum a1;
		c = n3.int_part.data[i];
		a1 = big_num_create_by_str('+', &c, "0");
		while (j++ < n3.int_part.size - i - 1)
			a1 = dec_mult(&a1);
		sum = dec_sum(&sum, &a1);
		++i;
	}
	str_print(&sum.int_part);
	i = 0;
	sum = big_num_create_by_str('+', "0", "0");
	while (i < n3.frac_part.size)
	{
		j = 0;
		t_bignum a1;
		c = n3.frac_part.data[i];
		a1 = big_num_create_by_str('+', &c, "0");
		while (j++ <= i)
			a1 = dec_div(&a1);
		sum = dec_sum(&sum, &a1);
		++i;
	}
}

void process_the_exponent(t_bignum *num, int exponent)
{
	int i;

	i = 0;
	if (exponent > 0)
		while (i++ < exponent)
			*num = bin_mult(num);
	else if (exponent < 0)
		while (i++ < ft_abs(exponent))
			*num = bin_divide(num);
}

t_bignum get_the_bits(double arg)
{
	int i;
	char *mantissa;
	int byte;
	t_bignum num;
	int exponent;

	i = 63;
	exponent = 0;
	t.d_num = arg;
	num = big_num_create_by_str('+', "1", NULL);
	while (i >= 0) 
	{
		byte = t.ll_num >> i & 1;
		if (i == 63)
			num.sign = byte + 48;
		else if (i >= 52)
			exponent += byte * pow(2, i - 52);
		else if (i >= 0)
			str_pushchar(&num.frac_part, byte + 48);
		--i;	
	}
	exponent -= 1023;
	process_the_exponent(&num, exponent);
	return (num);
}

void	f_handler(t_fs *form_string, long double arg, char **format)
{
	char *str;
	char sign;
	t_bignum num;

	f_cast(form_string, &arg);
	sign = f_get_sign(form_string, arg);
	if (arg < 0)
		arg = arg * -1.0;
	if (form_string->precision == -1)
		form_string->precision = 6;
	if (sign == '-')
		add_sign(&str, '-');
	else if (sign == '+')
		add_sign(&str, '+');
	num = get_the_bits(arg);

	width_insert(form_string, &str);
	*format = str;
}
