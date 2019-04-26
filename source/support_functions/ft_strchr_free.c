/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 22:21:42 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/26 22:26:58 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strchr_free(char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char*)str);
		str_forward(&str);
	}
	if (c == '\0')
	{
		while (*str != '\0')
			str_forward(&str);
		return (char*)(str);
	}
	return (NULL);
}
