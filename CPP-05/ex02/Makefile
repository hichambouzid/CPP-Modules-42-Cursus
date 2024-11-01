Name = Form_process

CPPFILS = Bureaucrat.cpp main.cpp Form.cpp

all:
	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address $(CPPFILS) -o $(Name)

clean:
	rm -rf $(Name)

fclean:
	rm -rf $(Name)

re : fclean all
