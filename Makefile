# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 02:45:42 by lide              #+#    #+#              #
#    Updated: 2022/02/01 17:05:19 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c\
				ft_putnbr_fd2.c

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= ${SRCS:.c=.o}
LIBC		= ar -rc
RM			= rm -f
${MAKE}		= make

${NAME}:	${OBJS}
			make -C ./libft
			cp libft/libft.a libftprintf.a
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
			make clean -C ./libft

fclean:
			${RM} ${OBJS}
			${RM} ${NAME}
			make fclean -C ./libft

re:			fclean all

.PHONY:		all clean fclean re
