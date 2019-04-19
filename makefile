# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/26 13:24:28 by nparker           #+#    #+#              #
#    Updated: 2019/04/17 14:56:05 by vice-wra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc

NAME := libftprintf.a

FLAGS := -c -g

SRC_DIR := char_vector/ fs_vector/ handling/ longarifm/ parsing/ support_functions/

OBJ_DIR := ../printf/

SEARCH_WILD := $(addsuffix *.c, $(SRC_DIR))

SEARCH_INC := $(addsuffix *.h, $(SRC_DIR))

INCLUDES := $(wildcard $(SEARCH_INC)*.h)

OBJECTS = $(wildcard *.o) 

SOURCES := $(wildcard $(SEARCH_WILD)*.c)

$(NAME):
	$(CC) $(FLAGS) $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	@make clean

all: $(NAME)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re