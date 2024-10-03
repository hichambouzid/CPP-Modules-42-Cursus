/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:11:07 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/03 18:01:18 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string name;
	
	name = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string& stringREF = name;
	stringPTR = &name;

	std::cout << "The address of string is: " << &name << '\n';
	std::cout << "The memory address held by stringPTR: " << stringPTR << '\n';
	std::cout << "The memory address held by stringREF: " << &stringREF << '\n';
	std::cout  << "\n\n\n";
	std::cout << "The value of string variable ---> " << name << '\n';
	std::cout << "The value pointed to by stringPTR ---> " << *stringPTR << '\n';
	std::cout << "The value pointed to by stringREF ---> " << stringREF << '\n';
}