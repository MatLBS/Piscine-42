# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 09:36:45 by matle-br          #+#    #+#              #
#    Updated: 2024/04/03 12:27:53 by matle-br         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAG = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDES = includes

MY_SOURCE = 	$(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_swap.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_strcmp.c 
RAN = ranlib
OBJS = $(MY_SOURCE:.c=.o)
AR = ar -rc
RM = rm -f

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDES)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RAN) $(NAME)


clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
