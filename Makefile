# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 13:43:01 by tbatteux          #+#    #+#              #
#    Updated: 2023/05/05 09:52:54 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FICHIERS_C =  ft_printf/*.c libft/*.c Get_next_line/*.c

FICHIERS_O = ${FICHIERS_C:.c=.o} 

all: ${NAME}

${NAME}: ${FICHIERS_O}
	ar rc ${NAME} *.o

${FICHIERS_O}: ${FICHIERS_C}
	gcc -c ${FICHIERS_C} -Wall -Wextra -Werror

clean: 
	rm -f *.o

fclean: clean 
	rm -f ${NAME}

re: fclean all
