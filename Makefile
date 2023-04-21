# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 10:33:33 by tbatteux          #+#    #+#              #
#    Updated: 2023/04/21 15:01:28 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FICHIERS_C = ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c check_format.c \
	    ft_printf.c ft_strlen.c ft_putnbrbase_fd.c 

FICHIERS_O = ${FICHIERS_C:.c=.o}

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${FICHIERS_O}
	ar rc ${NAME} ${FICHIERS_O}
	ranlib ${NAME}

${FICHIERS_O}: ${FICHIERS_C}
	gcc -c ${FICHIERS_C} -Wall -Wextra -Werror

clean:
	rm -f ${FICHIERS_O}

fclean: clean
	rm -f ${NAME}

re: fclean all
