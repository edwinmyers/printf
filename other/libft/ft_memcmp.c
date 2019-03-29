/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:06:46 by nparker           #+#    #+#             */
/*   Updated: 2019/03/28 20:01:55 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	i = -1;
	while (++i < n)
		if (*(cs1 + i) != *(cs2 + i))
			return (*(cs1 + i) - *(cs2 + i));
	return (0);
}
