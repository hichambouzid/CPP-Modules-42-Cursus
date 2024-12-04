NAME = btc

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CFILS = main.cpp  BitcoinExchange.cpp

OBJS = $(CFILS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all