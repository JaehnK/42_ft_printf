# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehukim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 13:57:44 by jaehukim          #+#    #+#              #
#    Updated: 2024/04/23 16:25:15 by jaehukim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		libft_utils.c \
		print_str.c \
		print_char.c \
		print_addr.c \
		print_dec.c \
		print_udec.c \

NAME = libftprintf.a
HEADR = ft_printf.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) $(HEADR)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
