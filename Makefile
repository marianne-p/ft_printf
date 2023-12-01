# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpihur <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:35:35 by mpihur            #+#    #+#              #
#    Updated: 2023/11/09 15:28:59 by mpihur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=		libftprintf.a
SRCS :=		ft_printf.c \
		ft_putnbr.c \
		ft_char_str.c \
		ft_to_hex.c \

OBJS :=        $(SRCS:.c=.o)

CC :=        cc
CFLAGS :=    -Wall -Wextra -Werror

AR :=        ar rcs

RM :=        rm -f

%.o:        %.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):    $(OBJS)
			$(AR) $@ $^

all:        $(NAME)

clean:
			$(RM) $(OBJS)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re
