/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:33:32 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/30 13:32:24 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void        o_handler(t_fs *form_string, unsigned long long arg, char **format)
{
    char* substr;

    substr = NULL;
    u_cast(form_string, &arg);
    substr = decToOctal(arg);
    precision_insert(form_string, &substr);
	if (ft_strchr(form_string->flags, '#') && form_string->precision <= ft_count_digits(arg) && arg != 0)
		substr = ft_strjoin("0", substr);
    width_insert(form_string, &substr);
    ft_replace(format, substr);
}