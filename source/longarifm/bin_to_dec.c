/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 20:33:45 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/23 19:11:12 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bignum.h"

void do_int_part(t_bignum *num)
{
	int i;
	char *str;
	t_bignum *tmp;
	t_bignum *sum;

	i = -1;
	sum = big_num_create_by_str('+', "0", "0");
	while (++i < num->int_part.size)
	{
		str = ft_strdup(&num->int_part.data[i]);
		str[1] = 0;
		tmp = big_num_create_by_str('+', str, "0");
		pos_pow(&tmp, num->int_part.size - i - 1, dec_mult);
		sum = dec_sum(sum, tmp);
		big_num_destroy(&tmp);
		ft_strdel(&str);
	}
	str_destroy(&num->int_part);
	str_push_cs(&num->int_part, &sum->int_part);
}

void do_frac_part(t_bignum *num)
{
	int i;
	char *str;
	t_bignum *sum;
	t_bignum *a1;

	i = -1;
	sum = big_num_create_by_str('+', "0", "0");
	while (++i < num->frac_part.size)
	{
		str = ft_strdup(&num->frac_part.data[i]);
		str[1] = 0;
		a1 = big_num_create_by_str('+', str, "0");
		pos_pow(&a1, i + 1, dec_div);
		sum = dec_sum(sum, a1);
	}
	str_destroy(&num->frac_part);
	str_push_cs(&num->frac_part, &sum->frac_part);
}

void bin_to_dec(t_bignum *num)
{
	do_int_part(num);
	do_frac_part(num);
}

// t_string get_dec_part(t_string *s, t_bignum *(*f)(t_bignum*))
// {
// 	int i;
// 	t_bignum *sum;
// 	t_bignum *one;
// 	t_bignum *new_sum;
// 	t_string res;
// 	char *str;

// 	i = -1;
// 	sum = big_num_create_by_str('+', "0", "0");
// 	while (++i < str_len(s))
// 	{
// 		str = ft_strdup(&s->data[i]);
// 		str[1] = 0;
// 		one = big_num_create_by_str('+', str, "0");
// 		pos_pow(&one, str_len(s) - i - 1, *f);
// 		new_sum = sum;
// 		sum = dec_sum(one, sum);
// 		big_num_destroy(&new_sum);
// 		big_num_destroy(&one);
// 	}
// 	if (s)
// 		res = str_create_custstr(&sum->int_part);
// 	else
// 		res = str_create_custstr(&sum->frac_part);
// 	big_num_destroy(&sum);
// 	return (res);
// }

// void bin_to_dec(t_bignum *num)
// {
// 	t_string  int_part_sum;
// 	t_string  frac_part_sum;


// 	int_part_sum = get_dec_part(&num->int_part, dec_mult);
// 	frac_part_sum = get_dec_part(&num->frac_part, dec_div);
// 	str_destroy(&num->int_part);
// 	str_destroy(&num->frac_part);
// 	num->int_part = int_part_sum;
// 	num->frac_part = frac_part_sum;
// }
