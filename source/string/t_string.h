#ifndef T_STRING_H_
#define T_STRING_H_

#include "../support_functions/support_functions.h"

typedef struct		s_string
{
	char			*data;
	int				size;
	int				capacity;
}                   t_string;

t_string            str_create_str(char *s);
t_string            str_create_size(int size);
t_string            str_create_custstr(t_string *cs);
t_string			str_cut(t_string *str, int start, int end);
t_string			str_custjoin(t_string *l, t_string *r);
void                str_resize(t_string *s, int new_size);
void                str_pushchar(t_string *s, char c);
void                str_pushstr(t_string *s, char *str);
int                 str_len(t_string *s);
void                str_destroy(t_string *s);
void                str_print(t_string *s);
void                str_rev(t_string *s);
char                str_at(t_string *s, int idx);
char                *to_cstr(t_string *str);
void				str_push_cs(t_string *l, t_string *r);

#endif