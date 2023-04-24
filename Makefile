# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 10:33:33 by tbatteux          #+#    #+#              #
#    Updated: 2023/04/24 16:10:25 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FICHIERS_C = ft_putchar2_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	     ft_printf.c ft_strlen.c ft_putnbrbase_fd.c \
	     ft_itoa.c format_s.c format_d.c \
	     format_x.c ft_putnbrunsigned.c format_u.c \
	     format_p.c ft_putnbradress.c 

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
