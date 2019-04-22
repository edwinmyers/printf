/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 14:37:33 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/22 20:02:03 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void    s_handler(t_fs *form_string, char *arg, char **format)
{
    char *substr;
    int i;

    substr = ft_strdup(arg);
    i = ft_strlen(substr);
	if (form_string->precision >= i)
		form_string->precision = i;
    if (form_string->precision > 0)
        s_get_precision(form_string, &substr);
	else if (form_string->precision == 0)
		ft_bzero(substr, 0);
    if (form_string->width != 0)
        s_get_width(form_string, &substr);
	*format  = substr;
}
