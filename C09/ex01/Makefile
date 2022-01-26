# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/18 15:25:01 by mzhan             #+#    #+#              #
#    Updated: 2020/07/22 12:45:33 by mzhan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADERS	= includes/ft.h
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I includes
OBJS	= ${SRCS:.c=.o}
RM 		= rm -f	

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 
all:		${NAME}

${NAME}: 	${HEADERS} ${OBJS} 
			ar rc  ${NAME} ${OBJS}
	
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re
