/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 16:01:33 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/24 12:40:29 by nparker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		c_handler(t_fs *form_string, int arg, char **format)
{
	char	*substr;

	if (arg == 0)
		*format = ft_strnew(0);
	else
	{
		substr = ft_strnew(1);
		*substr = (char)arg;
		width_insert(form_string, &substr);
		*format = substr;
	}
}
