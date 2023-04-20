# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 10:33:33 by tbatteux          #+#    #+#              #
#    Updated: 2023/04/20 10:54:18 by tbatteux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FICHIERS_C = 

FICHIERS_O = ${FICHIERS_C:.c=.o}

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${FICHIERS_O}
	ar rc ${NAME} ${FICHIERS_O}

${FICHIERS_O}: ${FICHIERS_C}
	gcc -c ${FICHIERS_C} -Wall -Wextra -Werror

clean:
	rm -f ${FICHIERS_O}

fclean: clean
	rm -f ${Name}

re: fclean all
