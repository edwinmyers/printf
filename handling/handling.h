/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 22:06:52 by sindenis          #+#    #+#             */
/*   Updated: 2019/03/25 13:45:57 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLING_H_
#define HANDLING_H_

#include "../fs_vector/fs_vector.h"
#include <stdarg.h>

void			d_handler(t_fs *form_string, long long arg, char **format);
void			i_handler(t_fs *form_string, long long arg, char **format);
void			o_handler(t_fs *form_string, long long arg, char **format);
void			u_handler(t_fs *form_string, long long arg, char **format);
void			x_handler(t_fs *form_string, long long arg, char **format);
void			xx_handler(t_fs *form_string, long long arg, char **format);
void			f_handler(t_fs *form_string, long double arg, char **format);
void			c_handler(t_fs *form_string, char arg, char **format);
void			s_handler(t_fs *form_string, char *arg, char **format);
void			p_handler(t_fs *form_string, long long arg, char **format);
void			pr_handler(t_fs *form_string, char args, char **format);
void            handler(va_list *args, t_fs_vector *form_strings, char **format);

#endif