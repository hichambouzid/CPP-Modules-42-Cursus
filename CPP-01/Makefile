Name = Zombie

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = Zombie.cpp      main.cpp        newZombie.cpp   randomChump.cpp

OBJS = $(CPPFILES:.cpp=.o)

all : $(Name)

$(Name) : $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(Name)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(Name)

re : fclean all