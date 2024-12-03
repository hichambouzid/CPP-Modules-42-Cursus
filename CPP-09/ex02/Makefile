NAME = PmergeMe

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

CPPFILS = main.cpp PmergeMe.cpp


OBJS = $(CPPFILS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm  -rf $(NAME)

re: fclean all