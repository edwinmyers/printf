/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:33:32 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/28 19:06:09 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void        o_handler(t_fs *form_string, unsigned long long arg, char **format)
{
    char* substr;
    char    sign;
    unsigned long long new_arg;

    substr = NULL;
    u_cast(form_string, &arg);
    substr = decToOctal(arg);
    sign = get_sign(form_string, new_arg);
    precision_insert(form_string, &substr);
    if (sign == '-')
        add_sign(&substr, '-');
    else if (sign == '+')
        add_sign(&substr, '+');
    width_insert(form_string, &substr);        
    ft_replace(format, substr);
}