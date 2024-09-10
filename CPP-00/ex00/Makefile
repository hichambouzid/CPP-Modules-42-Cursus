Name = megaphone

CFILS = megaphone.cpp

CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

OBJS = $(CFILS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(Name)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(Name)

re: all