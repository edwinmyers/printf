# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/26 13:24:28 by nparker           #+#    #+#              #
#    Updated: 2019/04/29 18:05:55 by vice-wra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc

NAME := libftprintf.a

FLAGS := -Wall -Wextra -Werror

SRC_DIR := source/string/cust_str_ops.c source/string/str_at.c \
	source/string/str_create_custstr.c source/string/str_create_size.c \
	source/string/str_create_str.c source/string/str_custjoin.c \
	source/string/str_cut.c source/string/str_destroy.c \
	source/string/str_len.c source/string/str_print.c \
	source/string/str_pushchar.c source/string/str_pushstr.c \
	source/string/str_push_cs.c source/string/str_resize.c \
	source/string/str_rev.c source/string/to_cstr.c \

	source/fs_vector/fs_copy.c source/fs_vector/fs_destroy.c \
	source/fs_vector/fs_init.c source/fs_vector/fs_vector_create.c \
	source/fs_vector/fs_vector_destroy.c source/fs_vector/fs_vector_length.c \
	source/fs_vector/fs_vector_push_back.c source/fs_vector/fs_vector_resize.c \
	
	source/handling/cast.c source/handling/c_handler.c \
	source/handling/d_handler.c source/handling/f_handler.c \
	source/handling/handler.c source/handling/lf_handler.c \
	source/handling/o_handler.c source/handling/precision_handler.c \
	source/handling/pr_handler.c source/handling/pr_handler.c \
	source/handling/p_handler.c source/handling/sign_ops.c \
	source/handling/s_handler.c source/handling/u_handler.c \
	source/handling/width_handler.c source/handling/x_handler.c \
		
	source/longarifm/bignum_create.c source/longarifm/bignum_create_by_str.c \
	source/longarifm/bignum_create_by_str.c source/longarifm/bignum_destroy.c \
	source/longarifm/bin_div.c source/longarifm/bin_mult.c \
	source/longarifm/bin_sum.c source/longarifm/bin_to_dec.c \
	source/longarifm/dec_div.c source/longarifm/dec_mult.c \
	source/longarifm/dec_sum.c source/longarifm/get_bits.c \
	source/longarifm/pos_pow.c source/longarifm/round.c \
	source/longarifm/swap_comp_str.c \

	
	source/parsing/ \
 			source/preparation/ source/queue/ source/support_functions/ source/

OBJ_DIR := objects

SEARCH_WILD := $(addsuffix *.c, $(SRC_DIR))

INCLUDES := source/ft_printf.h

OBJECTS := $(notdir $(patsubst %.c,%.o,$(wildcard $(SEARCH_WILD))))

SOURCES := $(wildcard $(SEARCH_WILD))

all:$(NAME)

$(NAME):
	@$(CC)  $(FLAGS) -g -c $(SOURCES) -I $(INCLUDES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
clean:
	@rm -rf $(OBJECTS)

fclean:	clean
	@rm -rf $(NAME)
re:
	@make fclean
	@make all
.PHONY: all clean fclean re
