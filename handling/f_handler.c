/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:10:34 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/07 16:04:28 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void f_cast(t_fs *form_string, long double *arg)
{
	if (form_string->size == NULL)
        *arg = (double)*arg;
}

char f_get_sign(t_fs *form_string, long double arg)
{
	char sign;

	if (arg >= 0 && ft_strchr(form_string->flags, '+'))
		sign = '+';
	else if (arg > 0)
		sign = 0;
	else if (arg < 0)
		sign = '-';
	return (sign);		
}
int ft_count_fdigits(long double n)
{
    int i;

    i = 1;
    while ((n = n / 10) != 0 && i <= 20)
        i++;
    return (i);
}

// char *ft_ultoa(long double n)
// {
// 	char *str;
// 	int i;

// 	i = 0;
// 	while (n / 10 != 0)
// }

void	f_handler(t_fs *form_string, long double arg, char **format)
{
	char *str;
	double rem;
	int i;
	char sign;
	char *temp;

	i = 0;
	f_cast(form_string, &arg);
	sign = f_get_sign(form_string, arg);
	if (arg < 0)
		arg = arg * -1.0;
	rem = ft_count_fdigits(arg);
	if (rem < 20)
		rem = arg - (unsigned long)arg;
	if (form_string->precision == -1)
		form_string->precision = 6;
	if (form_string->precision > 0)
	{
		while (i < form_string->precision && i <= 12 && rem < 20)
		{
			rem = rem * 10;
			i++;
		}
		str = ft_ltoa(arg);
		ft_strpush(&str, '.');
		if ((int)rem % 10 >= 5)
			rem++;
		str = ft_strjoin(str, ft_ltoa(rem));
		if (i > 12)
		{
			temp = ft_strnew(form_string->precision - i);
			while (i < form_string->precision)
			{
				temp[i] = '0';
				i++;
			}
			str = ft_strjoin(str, temp);
		}
	}
	else if (rem * 10 >= 5)
	{	
		arg++;
		str = ft_ltoa(arg);
	}
	else
		str = ft_ltoa(arg);
	if (sign == '-')
		add_sign(&str, '-');
	else if (sign == '+')
		add_sign(&str, '+');
	width_insert(form_string, &str);
	*format = str;
}
