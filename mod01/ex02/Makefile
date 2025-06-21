# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorais <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 13:09:13 by mmorais           #+#    #+#              #
#    Updated: 2025/06/21 13:09:31 by mmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=zombie
CPP=c++
CPP_FLAGS=-Wall -Wextra -Werror -std=c++98 

SRCS=main.cpp
OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
