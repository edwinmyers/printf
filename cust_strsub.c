/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cust_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:18:44 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/18 14:55:47 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_string		cust_strsub(t_string *str, unsigned int start, size_t len)
{
	t_string	new_str;
	size_t	i;

	i = 0;
	new_str = str_create_size(len);
	while (i < len && i++ < str->size)
		str_pushchar(&new_str, str_at(str, start++));
	return (new_str);
}

char		*cust_strsub_ret_char(t_string *str, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if ((new_str = ft_strnew(len)) == 0)
		return (NULL);
	while (i < len && i < str->size)
		*(new_str + i++) = str_at(str, start++);
	*(new_str + i) = '\0';
	return (new_str);
}
