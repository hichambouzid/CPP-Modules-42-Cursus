Name = Program_03

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3

CPPFILS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp  MateriaSource.cpp main.cpp


all:
	$(CXX) $(CPPFLAGS) $(CPPFILS)  -o $(Name) #-fsanitize=address

clean:
	rm -rf $(Name)

fclean:
	rm -rf $(Name)

re : fclean all
