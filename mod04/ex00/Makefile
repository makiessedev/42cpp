NAME=poly
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
OBJS=main.o
HEADER=

all: $(NAME)

$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
