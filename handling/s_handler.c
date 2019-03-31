/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 14:37:33 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/31 15:51:17 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char    *s_get_precision(t_fs *form_string, char **substr)
{
    int i;
    int    precision;
    char* new_substr;

    precision = form_string->precision;
    i = 0;
    new_substr = ft_strnew(precision + 1);
    while (precision--)
    {
        new_substr[i] = (*substr)[i];
        i++;
    }
    free(*substr);
    *substr = ft_strdup(new_substr);
    free(new_substr);
    return(*substr);
}

static char        *s_get_width(t_fs *form_string,char **substr)
{
    int i;
    int space;
    char    *new_sub;
    int len;
    int j;

    j = 0;
    len = ft_strlen(*substr);
    i = 0;
    space = (form_string->width - form_string->precision);
    new_sub = ft_strnew(space + len);
    if (ft_strchr(form_string->flags, '-'))
        width_insert_right(&new_sub, *substr, form_string->width - len, ' ');
    else
        width_insert_left(&new_sub, *substr, form_string->width - len, ' ');
    if (form_string->precision == 0)
    {
        while (i < form_string->width)
            new_sub[i++] = ' ';
    }
    *substr = new_sub;
    return (*substr);
}

void    s_handler(t_fs *form_string, char *arg, char **format)
{
    char *substr;
    int i;

    i = 0;
    substr = ft_strnew((char)*arg);
    while (i < (char)*arg)
        substr[i++] = (char)*arg++;
    if (form_string->precision > 0)
        s_get_precision(form_string, &substr);
    if (form_string->width != 0)
        s_get_width(form_string, &substr);
	if (form_string->precision == 0)
		ft_bzero(substr, 1);
    ft_replace(format, substr);
}