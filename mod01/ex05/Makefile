# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorais <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 13:11:17 by mmorais           #+#    #+#              #
#    Updated: 2025/06/21 13:11:19 by mmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=zombie
CPP=c++
CPP_FLAGS=-Wall -Wextra -Werror -std=c++98 

SRCS=main.cpp Harl.cpp
OBJS=$(SRCS:.cpp=.o)
HEADER=Harl.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
