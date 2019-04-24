/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparker <nparker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 20:33:45 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/24 14:23:31 by nparker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			do_int_part(t_bignum *num)
{
	int			i;
	char		*str;
	t_bignum	*tmp;
	t_bignum	*sum;

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

void			do_frac_part(t_bignum *num)
{
	int			i;
	char		*str;
	t_bignum	*sum;
	t_bignum	*a1;

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

void			bin_to_dec(t_bignum *num)
{
	do_int_part(num);
	do_frac_part(num);
}
