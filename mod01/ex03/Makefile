NAME=zombie
CPP=c++
CPP_FLAGS=-Wall -Wextra -Werror -std=c++98 

SRCS=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS=$(SRCS:.cpp=.o)
HEADER=HumanA.hpp HumanB.hpp Weapon.hpp

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
