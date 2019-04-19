/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:51:56 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/19 15:15:48 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <math.h>
#include "queue.h"

double n_div(double byte, int n)
{
	while (n)
	{
		byte /= 2;
		--n;
	} 
	return byte;
}

double n_mult(double byte, int n)
{
	while (n)
	{
		byte *= 2;
		--n;
	} 
	return byte;
}

int main()
{
	int i;
	int sign;
	char mantissa[65];
	int exponent;
	int byte;

	t.d_num = -423432423432434543543454350.2234432345435435345344233234L;

	i = 63;
	int n;
	int j = 0;
	n = 1;
	exponent = 0;
	// while (i >= 0) {
	// 	int byte = t.ll_num >> i & 1;
	// 	if (i == 127)
	// 		sign = byte;
	// 	else if (i >= 110)
	// 		exponent += byte * pow(2, i - 110);
	// 	else if (i >= 0)
	// 	{
	// 		mantissa[j] = byte + 48;t.t_double.exponent >> i-- & 1
	// 		j++;
	// 	}
	// 	--i;	
	// }
	while (i >= 0)
	{
		byte = t.t_double.mantissa >> i & 1;
		mantissa[j++] = byte + 48;
		i--;
	}
	mantissa[64] = '\0';
	i = 14;
	byte = 0;
	// while (i >= 0)
	// {
	// 	exponent += (t.t_double.exponent >> i & 1) * pow(2, i - 14);
	// 	--i;
	// }
	// exponent-=16383;
	// if (exponent > 0)
	// 	mantissa = n_mult(mantissa, exponent);
	// else
	// 	mantissa = n_div(mantissa, abs(exponent));
	exponent = t.t_double.exponent - 16383;
	printf("%d", exponent);
	printf("\n%s\n", mantissa);
	printf("%Lf\n", t.d_num);
	printf("%d", t.t_double.sign);
	// printf("\n%.2Lf", t.d_num);
}


	// while (i >= 0) 
	// {
	// 	byte = t.ll_num >> i & 1;
	// 	if (i == 63)
	// 		num->sign = byte + 48;
	// 	else if (i >= 52)
	// 		exponent += byte * ft_pow(2, i - 52);
	// 	else if (i >= 0)
	// 		str_pushchar(&num->frac_part, byte + 48);
	// 	--i;	
	// }