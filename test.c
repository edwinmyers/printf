/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:51:56 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/16 17:07:25 by vice-wra         ###   ########.fr       */
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
	char mantissa[53];
	int exponent;

	
	t.d_num = 500.55;

	i = 63;
	exponent = 0;
	int n;
	int j = 0;
	n = 1;
	mantissa[52] = 0;
	while (i >= 0) {
		int byte = t.ll_num >> i & 1;
		// printf("%d", byte);
		if (i == 63)
			sign = byte;
		else if (i >= 52)
			exponent += byte * pow(2, i - 52);
		else if (i >= 0)
		{
			mantissa[j] = byte + 48;
			j++;
		}
		--i;	
	}
	exponent -= 1023;
	// if (exponent > 0)
	// 	mantissa = n_mult(mantissa, exponent);
	// else
	// 	mantissa = n_div(mantissa, abs(exponent));

	
	printf("%d", exponent);
	printf("\n%s\n", mantissa);
	printf("%Lf", t.d_num);
	// printf("\n%.2Lf", t.d_num);
}
