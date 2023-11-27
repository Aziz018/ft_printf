# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 09:08:24 by aelkheta          #+#    #+#              #
#    Updated: 2023/11/26 18:35:27 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = ft_printf.c \
	ft_print_address.c \
	ft_print_str.c \
	ft_print_char.c \
	ft_putnbr.c \
	ft_putnbr_unsigned.c \
	ft_print_hex_upp.c \
	ft_print_hex_low.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean