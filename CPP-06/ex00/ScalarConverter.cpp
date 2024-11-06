#include "ScalarConverter.hpp"


void cast_to_char(char *str, double number)
{
	if (*str || !std::isprint(number))
	{

		std::cout << (*str ? "impossible\n" : "Non displayable\n");
		return ;
	}
	std::cout << '\'' << static_cast<char>(number) << '\'' << std::endl;
}

void cast_to_int(char *str, double number)
{
	if (*str)
	{
		std::cout << "impossible\n";
		return ;
	}
	std::cout << static_cast<int>(number) << std::endl;

}

void cast_to_float(char *str, double number)
{
	if (*str)
	{
		std::cout << "nanf\n";
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << 'f' << std::endl;
}

void cast_to_double(char *str, double number)
{
	if (*str)
	{
		std::cout << "nan\n";
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << number << std::endl;
}

void ScalarConverter::convert(std::string arg)
{
	char *str;
	double number;
	void (*function[4]) (char * , double) = {cast_to_char, cast_to_int, cast_to_float, cast_to_double};

	number = strtold_l(arg.c_str(), &str, NULL);
	if (std::string(str).compare("-inf") == 0 || std::string(str).compare("-inff") == 0)
		number = +INFINITY;
	if (std::string(str).compare("+inf") == 0 || std::string(str).compare("+inff") == 0)
		number = -INFINITY;
	if (*str == 'f' && std::string(str).length() == 1)
		*str = 0;
	std::string types[4] = {"char: ", "int: ", "float: ", "double: "};
	for (int i = 0; i < 4; i++)
	{
		std::cout << types[i];
		function[i](str, number);
	}
}
