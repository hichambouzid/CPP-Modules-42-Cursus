Name = phonebook

CFILS = main.cpp Contact.cpp  PhoneBook.cpp

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CFILS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean
	rm -rf $(OBJS)

re: fclean all