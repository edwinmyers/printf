/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:15:32 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/08 17:50:22 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "support_functions/support_functions.h"

char *ft_add_bins(char *num1, char *num2)
{
	char *num3;
	int len;
	int len1;

	len = ft_strlen(num1);
	len1 = ft_strlen(num2);
	num3 = ft_strnew(100);
	if (len > len1)
	{
		while (len)
		{
			if (num1[len] == '0' && num2[len1] == '0')
				
		}	
	}

}


int main()
{




	
}

