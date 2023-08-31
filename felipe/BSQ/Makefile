# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 13:17:14 by fbascuna          #+#    #+#              #
#    Updated: 2023/08/31 13:34:39 by fbascuna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc -Wall -Wextra -Werror
SRCS = ./ft_putstr.c	\
		./ft_putchar.c	\
		./ft_print_table.c	\
ALL: $(NAME)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)

	re: fclean all