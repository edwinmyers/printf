/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:46:22 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/26 22:15:18 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_strsub_free(char **s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (*s == NULL)
		return ;
	if (len == (size_t)-1)
		return ;
	substr = ft_strnew(len);
	if (substr == NULL)
		return ;
	while (i < len)
	{
		substr[i] = (*s)[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	free (*s);
	*s = substr;
}
