# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorais <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 13:07:52 by mmorais           #+#    #+#              #
#    Updated: 2025/06/21 13:07:54 by mmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=zombie
CPP=c++
CPP_FLAGS=-Wall -Wextra -Werror -std=c++98 

SRCS=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS=$(SRCS:.cpp=.o)
HEADER=header.hpp Zombie.hpp 

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
