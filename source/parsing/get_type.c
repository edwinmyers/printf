/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 21:44:04 by sindenis          #+#    #+#             */
/*   Updated: 2019/04/26 21:29:57 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char		get_type(char **str)
{
	char	type;
	char	*temp;

	type = 0;
	if (ft_isflag(**str) || **str == '%')
	{
		temp = *str;
		type = **str;
		*str = ft_strdup(temp + 1);
		ft_strdel(&temp);
	}
	return (type);
}
