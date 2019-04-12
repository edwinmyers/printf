/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 21:58:28 by sindenis          #+#    #+#             */
/*   Updated: 2019/04/10 13:38:04 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPORT_FUNCTIONS_H_
#define SUPPORT_FUNCTIONS_H_

#include <stdlib.h>
#include <unistd.h>

void	            ft_strdel(char **as);
char	            *ft_strdup(const char *s1);
size_t	            ft_strlen(const char *s);
void                ft_strpush(char **str1, char str2);
int		            ft_isalpha(int c);
int                 ft_isdigit(int c);
char	            *ft_strchr(const char *s, int c);
int		            ft_strncmp(const char *s1, const char *s2, size_t n);
char	            *ft_ltoa(long long n);
char                *ft_strnew(size_t size);
void	            ft_bzero(void *s, size_t n);
char	            *ft_strcat(char *s1, const char *s2);
void                ft_sym_del(char **str, char c);
char                *ft_strjoin(char const *s1, char const *s2);
char                *ft_strsub(char const *s, unsigned int start, size_t len);
int                 ft_max(int x, int y);
int		            ft_strcmp(const char *s1, const char *s2);
int                 ft_count_digits(int n);
char                *ft_rev_str(char *str);
int		            ft_isalnum(int c);
void	            ft_putchar(char c);
void	            ft_putstr(char const *s);
void	            ft_putendl(char const *s);
char                *ft_dec_to_hex(unsigned long long n);
unsigned int        ft_dec_to_octal(unsigned int nb);
void                ft_toupper(char **str);
char                del_minus(char **str);



#endif
