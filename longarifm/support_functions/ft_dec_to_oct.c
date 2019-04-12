/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:32:47 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/10 13:38:34 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

char *decToOctal(unsigned long long n)
{ 
    int octalNum[100];
    int i;
	char *str;
	int j;

	j = 0;
	i = 0;
	str = NULL;
    while (n != 0)
	{
        octalNum[i] = n % 8; 
        n = n / 8; 
        i++; 
    }
	str = ft_strnew(i);
	while (i--)
		str[j++] = octalNum[i] + 48;
	return (str);
}
