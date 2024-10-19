Name = DiamondTrap

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -Wno-shadow  -std=c++98

CPPFILS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp


all:
	$(CXX) $(CPPFLAGS) $(CPPFILS) -o $(Name)

clean:
	rm -rf $(Name)

fclean:
	rm -rf $(Name)

re : fclean all