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
