/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:28:21 by nparker           #+#    #+#             */
/*   Updated: 2019/04/10 12:58:58 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

char			*ft_strcat(char *s1, const char *s2)
{
	int			i;
	int			j;

	i = -1;
	j = (int)ft_strlen(s1);
	while (s2[++i])
		s1[j++] = s2[i];
	s1[j] = '\0';
	return (s1);
}
