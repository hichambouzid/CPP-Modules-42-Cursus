Name = Program_00

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILS = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp


all:
	$(CXX) $(CPPFLAGS) $(CPPFILS) -o $(Name)

clean:
	rm -rf $(Name)

fclean:
	rm -rf $(Name)

re : fclean all