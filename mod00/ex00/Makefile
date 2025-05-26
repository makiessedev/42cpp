NAME = megaphone
CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@	
clean:
	rm -rf $(OBJS) 
fclean: clean
	rm -rf $(NAME)
re: fclean all
