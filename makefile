# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/26 13:24:28 by nparker           #+#    #+#              #
#    Updated: 2019/04/22 15:06:47 by vice-wra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc

NAME := libftprintf.a

FLAGS := -Wall -Wextra -Werror

SRC_DIR := source/string/ \
			source/fs_vector/ source/handling/ source/longarifm/ source/parsing/ \
 			source/preparation/ source/queue/ source/support_functions/ source/

OBJ_DIR := objects

SEARCH_WILD := $(addsuffix *.c, $(SRC_DIR))

INCLUDES := source/ft_printf.h

OBJECTS := $(notdir $(patsubst %.c,%.o,$(wildcard $(SEARCH_WILD))))

SOURCES := $(wildcard $(SEARCH_WILD))

all:$(NAME)

$(NAME):
	@$(CC) -g -c $(SOURCES) -I $(INCLUDES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@rm -rf $(OBJECTS)
clean:
	@rm -rf $(OBJECTS)

fclean:	clean
	@rm -rf $(NAME)
re:
	@make fclean
	@make all
.PHONY: all clean fclean re