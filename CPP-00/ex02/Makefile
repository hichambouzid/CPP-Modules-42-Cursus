NAME = GlobalBankters

CFILES = Account.cpp tests.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CFILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
