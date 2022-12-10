# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 14:54:39 by acrespy           #+#    #+#              #
#    Updated: 2022/12/09 14:54:40 by acrespy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_put.c \

OBJS = ${SRCS:.c=.o}
DEPS  = ${SRCS:.c=.d}

NAME = libftprintf.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -MMD -g

AR = ar
ARFLAGS = -rc

RM	= rm -rf

.c.o: ${DEPS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS} ${DEPS}
	ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS} ${DEPS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

-include ${DEPS}
.PHONY: all bonus clean fclean re