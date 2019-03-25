/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_vector_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindenis <sindenis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 21:52:46 by sindenis          #+#    #+#             */
/*   Updated: 2019/03/21 21:52:54 by sindenis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fs_vector.h"

t_fs_vector fs_vector_create(int size)
{
	t_fs_vector v;

	v.data = (t_fs *)malloc(sizeof(t_fs) * size);
	v.size = 0;
	v.capacity = size;
	return v;
}
