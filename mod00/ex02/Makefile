# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorais <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 05:55:18 by mmorais           #+#    #+#              #
#    Updated: 2025/05/26 07:33:00 by mmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Account.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm $(OBJS)
fclean: clean
	rm $(NAME)
re: fclean all
