/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:22:00 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/30 13:28:26 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

void ft_toupper(char **str)
{
	int		i;
	
	i = 0;
	if (*str == NULL)
		return ;
	while ((*str)[i])
	{
		if (ft_isalpha((*str)[i]))
			(*str)[i] = (*str)[i] - 32;
		i++;
	}
}
