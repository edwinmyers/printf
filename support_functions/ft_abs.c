/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:48:09 by nparker           #+#    #+#             */
/*   Updated: 2019/04/16 15:29:04 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

int		ft_abs(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}
