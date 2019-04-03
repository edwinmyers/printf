/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_vec.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:16:28 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/03 13:35:42 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct		s_char_vec
{
	char			*str;
	int				size;
	int				capacity;
} t_char_vec;

t_char_vec		ft_cvec_create(int size);
void		ft_cvec_resize(t_char_vec *v);
void	ft_cvec_push_back(t_char_vec *v, char elem);
