# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sylvain <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 15:46:35 by sylvain           #+#    #+#              #
#    Updated: 2020/12/20 07:41:38 by sgeymond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c	\
       ft_utils.c	\
       ft_utils2.c	\
       ft_putnbr_base.c	\
       ft_atoi.c	\
       ft_putcsdi.c	\
       ft_putu.c	\
	   ft_putp.c	\
       ft_putx.c	\
	   ft_putxx.c	\
       ft_options.c	\
       ft_options2.c\
	   ft_options3.c\
       ft_k_s.c		\
       ft_k_s2.c	\
       ft_k_di.c	\

OBJS = ${SRCS:.c=.o}

CC =	gcc

CFLAGS	= -Wall -Wextra

RM	= rm -f

all : ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:        ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
