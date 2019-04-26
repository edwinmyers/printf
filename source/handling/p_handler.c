/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 13:21:27 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/24 15:31:19 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void p_handler(t_fs *form_string, long long arg, char **format)
{
	char *substr;
	char *temp;

	if (arg > 0)
		substr = ft_dec_to_hex(arg);
	else
		substr = ft_strdup("0");
	precision_insert(form_string, &substr);
	temp = substr;
	substr = ft_strjoin("0x", substr);
	free(temp);
	width_insert(form_string, &substr);
	*format = substr;
}
