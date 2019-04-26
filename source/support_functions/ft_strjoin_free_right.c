/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_right.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:21:37 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/26 16:31:26 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*ft_strjoin_free_right(char const *s1, char **s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 || !*s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(*s2);
	new_str = ft_strnew(len1 + len2);
	if (!new_str)
		return (0);
	i = -1;
	j = -1;
	while (++i < len1)
		*(new_str + i) = *(s1 + i);
	while (++j < len2)
		*(new_str + i++) = (*s2)[j];
	*(new_str + i) = '\0';
	free (*s2);
	return (new_str);
}
