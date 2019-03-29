/* ************************************************************************** */
/*                                                                                        */
/*                                                                 :::       ::::::::   */
/*   ft_printf.c                                              :+:       :+:    :+:   */
/*                                                            +:+ +:+          +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>           +#+  +:+        +#+         */
/*                                                        +#+#+#+#+#+   +#+            */
/*   Created: 2019/03/18 13:28:29 by jblue-da           #+#    #+#               */
/*   Updated: 2019/03/26 15:44:44 by vice-wra          ###   ########.fr        */
/*                                                                                        */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_printf(char *format, ...)
{
	size_t			len;
	va_list			args;
	t_fs_vector		form_strings;

	va_start(args, format);
	form_strings = fs_vector_create(10);
	parse(format, &form_strings);
	prepare(&form_strings);
	handler(&args, &form_strings, &format);
	len = ft_strlen(format);
	write(1, format, len);
	return ((int)len);
}

#include <stdio.h>
int main()
{
	int i;
	long long p;
	i = 4;
	
	p = (long long)&i;
	ft_printf("% 4d\n", +500);
	printf("% 4d", +500);

}