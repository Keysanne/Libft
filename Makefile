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

NAME = libft.a

FIHIERS_C = ft_atoi.c ft_bzero.c ft_calloc.c \
	    ft_isalnum.c ft_isalpha.c ft_isascii.c \
	    ft_isdigit.c ft_isprint.c ft_itoa.c \
	    ft_memchr.c ft_memcmp.c ft_memcpy.c \
	    ft_memmove.c ft_memset.c ft_putchar_fd.c \
	    ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	    ft_split.c ft_strchr.c ft_strdup.c \
	    ft_striteri.c ft_strjoin.c ft_strlcat.c \
	    ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	    ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	    ft_strtrim.c ft_substr.c ft_tolower.c \
	    ft_toupper.c

FICHIERS_O = ${FICHIER_C:.c=.o}

all: ${NAME}

${NAME}: ${FICHIERS_O}
	ar rc ${NAME} ${FICHIERS_O}

${FICHIERS_O}: ${FICHIER_C}
	gcc -c ${FICHIER_C} -Wall -Wextra -Werror

clean: 
	rm -f *.o

fclean: clean 
	rm -f ${NAME}

re: fclean all
