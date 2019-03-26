/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 18:29:05 by ivan              #+#    #+#             */
/*   Updated: 2019/03/26 22:58:11 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/* Нужно обработать ширину поля и по тестить*/

char	s_get_width(t_fs *form_string, char **substr)
{
	int i;
	int	precision;
	char* new_substr;

	precision = form_string->precision;
	new_substr = ft_strnew(precision + 1);
	i = 0;
	if (precision != 0)
	{
		while (precision--)
		{
			new_substr[i] = (*substr)[i];
			i++;
		}
	}
	free(*substr);
	*substr = ft_strdup(new_substr);
	free(new_substr);
	return(**substr);
}

void	s_handler(t_fs *form_string, char *arg, char **format)
{
	char *substr;
	int i;

	i = 0;
	substr = ft_strnew((char)*arg);
	while (i < (char)*arg)
		substr[i++] = (char)*arg++;
	s_get_width(form_string, &substr);
	ft_replace(format, substr);
}
