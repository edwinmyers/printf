/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:51:56 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/18 16:10:09 by vice-wra         ###   ########.fr       */
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
	char mantissa[64];
	int exponent;

	t.d_num = 200.0L;

	i = 127;
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
	// 		mantissa[j] = byte + 48;
	// 		j++;
	// 	}
	// 	--i;	
	// }
	i = 0;
	while (i < 64)
	{
		int byte = t.t_double.mantissa >> i & 1;
		mantissa[i++] = byte + 48;
	}
	mantissa[--i] = '\0';

	// if (exponent > 0)
	// 	mantissa = n_mult(mantissa, exponent);
	// else
	// 	mantissa = n_div(mantissa, abs(exponent));

	printf("%d", t.t_double.exponent );
	printf("\n%s\n", mantissa);
	printf("%Lf", t.d_num);
	// printf("\n%.2Lf", t.d_num);
}
