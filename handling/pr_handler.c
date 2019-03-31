/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:40:32 by vice-wra          #+#    #+#             */
/*   Updated: 2019/03/31 15:14:43 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void ft_pr_replace(char **str, char *substr)
{

}


void			pr_handler(t_fs *form_string, char arg, char **format)
{
	char *temp;
	int i;
	int j;
	char *new_str;
	
	i = 0;
	j = 0;
	new_str = ft_strnew(100);
	while ((*format[i]) != '%')
	{
		new_str[i] = (*format)[i];
		i++;
	}
	i = 0;
	temp = ft_strchr(*format, '%') + 1;
	while (temp[i] != '%')
		i++;
	new_str[j] = '%';
	while (temp[i] && temp[i] != '%')
		i++;
	i++;
	width_insert(form_string, &new_str);
	ft_strcat(new_str, ft_strsub(temp, i, ft_strlen(temp) - 1));

	*format = new_str;
}

// %4%