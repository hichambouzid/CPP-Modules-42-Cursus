Name = phonebook

CLFAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

CFILES = main.cpp Contact.cpp  PhoneBook.cpp

OBJS = $(CFILES:.cpp=.o)



all: $(OBJS)
	c++ $(CLFAGS) $(OBJS) -o $(Name)


clean:
	rm -rf $(Name)

fclean: clean
	rm -rf $(OBJS)

re: clean all