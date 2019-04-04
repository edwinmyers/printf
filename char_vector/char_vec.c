/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_vec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:25:17 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/03 18:15:21 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_vec.h"

t_char_vec		ft_cvec_create(int size)
{
	t_char_vec	v;

	v.str = (char *)malloc(sizeof(char) * size + 1);
	v.size = 0;
	v.capacity = size;
	return (v);
}

void		ft_cvec_resize(t_char_vec *v)
{
	int *new_data;
	int i;

	i = 0;
	new_data = (int *)malloc(sizeof(int) * v->size + 1);
	while (i < v->size)
	{
		new_data[i] = v->str[i];
		i++;
	}
	free(v->str);
	v->capacity *= 2;
	v->str = malloc(v->capacity * sizeof(char) + 1);
	i = 0;
	while (i < v->size)
	{
		v->str[i] = new_data[i];
		i++;
	}
}

void	ft_cvec_push_back(t_char_vec *v, char elem)
{
	if (v->capacity == v->size)
		ft_cvec_resize(v);
	v->str[v->size] = elem;
	v->size++;
}

