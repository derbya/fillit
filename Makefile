# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpierce <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/25 10:27:14 by bpierce           #+#    #+#              #
#    Updated: 2017/06/17 14:18:33 by bpierce          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

C_FIL = *.c
C_LOC = src
C_SRC = $(addprefix $(C_LOC)/, $(C_FIL))

O_FIL = *.o
O_LOC = obj
O_SRC = $(addprefix $(O_LOC)/, $(O_FIL))


H_LOCS = -Iinc -Ilibft/inc

GCC_FLAGS = gcc -Wall -Wextra -Werror

LIB = libft/libft.a

all: $(NAME)

$(NAME):
	cd libft && make
	$(GCC_FLAGS) $(H_LOCS) $(LIB) $(C_SRC) -o $(NAME)

clean:
	cd libft && make clean

fclean: clean
	cd libft && make fclean
	/bin/rm -f $(NAME)

re: fclean all
