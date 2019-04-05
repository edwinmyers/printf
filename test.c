/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:51:56 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/05 18:14:10 by vice-wra         ###   ########.fr       */
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
	double mantissa;
	int exponent;

	union {
		double d_num;
		long long ll_num;
	} t;
	
	t.d_num = 121345678980.654;

	i = 63;
	exponent = 0;
	mantissa = 1.0;
	int n;
	n = 1;
	while (i >= 0) {
		int byte = t.ll_num >> i & 1;
		printf("%d", byte);
		if (i == 63)
			sign = byte;
		else if (i >= 52)
			exponent += byte * pow(2, i - 52);
		else if (i >= 0)
		{
			mantissa += n_div(byte, n);
			n++;
		}
		--i;
	}
	exponent -= 1023;
	if (exponent > 0)
		mantissa = n_mult(mantissa, exponent);
	else
		mantissa = n_div(mantissa, abs(exponent));

	

	printf("\n%f", mantissa);
	printf("\n%f", t.d_num);
}
