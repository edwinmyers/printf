/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:28:20 by jblue-da          #+#    #+#             */
/*   Updated: 2019/03/28 19:04:39 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
#define FT_PRINTF_H_

#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include "fs_vector/fs_vector.h"

/* Main function */
int				ft_printf(char *format, ...);
void            arr_zero(int *arr, int size);
char            *get_flags(char **str);
void            get_fs(char **str, t_fs *form_string);
int             get_precision(char **str);
char            *get_size(char **str);
char            get_type(char **str);
int             get_width(char **str);
int             overflow_handle(char *str);
void            parse(char *format, t_fs_vector *form_strings);
void			d_handler(t_fs *form_string, long long arg, char **format);
void			i_handler(t_fs *form_string, long long arg, char **format);
void			o_handler(t_fs *form_string, unsigned  long long arg, char **format);
void			u_handler(t_fs *form_string, unsigned long long arg, char **format);
void			x_handler(t_fs *form_string, long long arg, char **format);
void			xx_handler(t_fs *form_string, long long arg, char **format);
void			f_handler(t_fs *form_string, long double arg, char **format);
void			c_handler(t_fs *form_string, int arg, char **format);
void			s_handler(t_fs *form_string, char *arg, char **format);
void			p_handler(t_fs *form_string, long long arg, char **format);
void			pr_handler(t_fs *form_string, char args, char **format);
void            handler(va_list *args, t_fs_vector *form_strings, char **format);
void            prepare(t_fs_vector *form_strings);
void            prepare_item(t_fs *form_string);
char            get_sign(t_fs *form_string, long long arg);
void            width_insert(t_fs *form_string, char **substr);
void            ft_replace(char **str, char *substr);
void 			precision_insert(t_fs *form_string, char **substr);
void 			width_insert_left(char **new_str, char *substr, int width, char c);
void 			width_insert_right(char **new_str, char *substr, int width, char c);
void 			add_sign(char **str, char sign);
void 			num_insert(char **substr, long long arg, t_fs *form_string);
void			u_cast(t_fs *form_string, unsigned long long *arg);
char			*decToOctal(unsigned long long n);





#endif
