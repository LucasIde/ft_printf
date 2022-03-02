# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 19:01:47 by lide              #+#    #+#              #
#    Updated: 2022/02/07 13:45:32 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_itoa.c

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= ${SRCS:.c=.o}
LIBC		= ar -rc
RM			= rm -f

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
