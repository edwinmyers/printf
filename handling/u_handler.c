/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:24:46 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/28 18:30:14 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


void u_cast(t_fs *form_string, unsigned long long *arg)
{
	if (form_string->size == NULL)
        *arg = (unsigned int)*arg;
	else if (ft_strcmp(form_string->size, "l") == 0)
        *arg = (unsigned long)*arg;
    else if (ft_strcmp(form_string->size, "hh") == 0)
        *arg = (unsigned char)*arg;
    else if (ft_strcmp(form_string->size,"h") == 0)
        *arg = (unsigned short int)*arg;
}


void	u_handler(t_fs *form_string, unsigned long long arg, char **format)
{
	char *substr;
	char sign;

	substr = NULL;
	u_cast(form_string, &arg);
	sign = get_sign(form_string, arg);
	num_insert(&substr, arg, form_string);
	precision_insert(form_string, &substr);
	if (sign == '-')
		add_sign(&substr, '-');
	else if (sign == '+')
		add_sign(&substr, '+');
	width_insert(form_string, &substr);	
	ft_replace(format, substr);
}
