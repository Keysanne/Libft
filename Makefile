# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 13:43:01 by tbatteux          #+#    #+#              #
#    Updated: 2023/04/19 10:44:40 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FICHIERS_C = ft_atoi.c ft_bzero.c ft_calloc.c \
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

FICHIERS_O = ${FICHIERS_C:.c=.o}

BONUS_C = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c 

BONUS_O = ${BONUS_C:.c=.o}

all: ${NAME}

${NAME}: ${FICHIERS_O}
	ar rc ${NAME} ${FICHIERS_O}

${FICHIERS_O}: ${FICHIERS_C}
	gcc -c ${FICHIERS_C} -Wall -Wextra -Werror

bonus: ${BONUS_O}
	ar rc ${NAME} ${FICHIERS_O} ${BONUS_O}

${BONUS_O}: ${BONUS_C}
	gcc -c ${BONUS_C} -Wall -Wextra -Werror

clean: 
	rm -f ${FICHIERS_O}

fclean: clean 
	rm -f ${NAME}

re: fclean all
