#  **************************************************************************  #
#                                                                              #
#                                                          :::      ::::::::   #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iakyaou <iakyaou@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 23:49:36 by iakyaou           #+#    #+#              #
#    Updated: 2022/10/28 23:53:18 by iakyaou          ###   ########.fr        #
#                                                                              #
#  **************************************************************************  #
#                                                                              #
#   █████████            ██████████         ██████████         ██████████      #
#   ██     ██                    ██                 ██         ██      ██      #
#          ██                    ██                 ██         ██      ██      #
#          ██                    ██                 ██                 ██      #
#          ██            ██████████         ██████████                 ██      #
#          ██                    ██                 ██                 ██      #
#          ██                    ██                 ██                 ██      #
#          ██                    ██                 ██                 ██      #
#       ████████         ██████████         ██████████                 ██      #
#                                                                              #
#  **************************************************************************  #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 01:44:00 by iakyaou           #+#    #+#              #
#    Updated: 2022/11/19 14:50:38 by iakyaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES		=  	ft_printf.c	ft_putunsigned.c ft_putadress.c	ft_putchar.c	ft_puthexdecimal.c	ft_putnumber.c	ft_putstring.c

OBJECTS		= 	$(SOURCES:.c=.o)

NAME		= libftprintf.a
FLAGS		= -Wall -Wextra -Werror
APPEND		= ar -rc
RM			= rm -f
CC			= cc


all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $<

$(NAME) : $(OBJECTS)
	$(APPEND) $(NAME) $(OBJECTS)
	
clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re clean
