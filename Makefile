# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 02:45:42 by lide              #+#    #+#              #
#    Updated: 2022/01/29 08:07:56 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= ${SRCS:.c=.o}
LIBC		= ar -rc
RM			= rm -f
${MAKE}		= make

${NAME}:	${OBJS}
			${MAKE} -C libft
			cp libft/libft.a libftprintf.a
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}


modifier quand avancer
		clean:
					${RM} ${OBJS}

		fclean:		clean
					${RM} ${NAME}

		re:			fclean all

		.PHONY:		all clean fclean re
