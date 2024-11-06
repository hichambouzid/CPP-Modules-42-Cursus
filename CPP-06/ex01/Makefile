Name = reinterpret

CPPFILS = main.cpp Serialize.cpp Data.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all:
	c++ $(CPPFLAGS) $(CPPFILS) -o $(Name)

clean:
	rm -rf $(Name)

fclean:
	rm -rf $(Name)

re: fclean all