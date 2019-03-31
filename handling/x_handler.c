/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 12:55:41 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/30 13:32:29 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			x_handler(t_fs *form_string, unsigned long long arg, char **format)
{
    char* substr;
	
	substr = NULL;
    u_cast(form_string, &arg);
    if (arg > 0)
		substr = ft_dec_to_hex(arg);
	else
		substr = ft_strdup("0");
    precision_insert(form_string, &substr);
	if (ft_strchr(form_string->flags, '#') && arg != 0)
		substr = ft_strjoin("0x", substr);
    width_insert(form_string, &substr);
	if (form_string->type == 'X')
		ft_toupper(&substr);
    ft_replace(format, substr);
}