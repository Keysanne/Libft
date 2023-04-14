# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 13:43:01 by tbatteux          #+#    #+#              #
#    Updated: 2023/04/14 13:57:22 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft.a

libft.a: *.o 
	ar rc *.o

fichiers_o: *.c
	gcc -c *.c -Wall -Wextra -Werror

clean: 
	rm -f *.o

fclean: clean 
	rm -f libft.a

re: clean all
