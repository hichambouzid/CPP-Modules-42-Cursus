/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:09:55 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/10 17:21:22 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int  main()
{	
	std::string		name;
	PhoneBook	phonebook;
	// (void)ac;
	// (void)av;
	while (1)
	{
		std::getline(std::cin, name);
		std::cout << name << std::endl;
		if (!phonebook.add.compare(name))
			phonebook.add_new_contact();
			
			// std::cout << "-----------------help help------------------\n";
		else if (!phonebook.search.compare(name))
			// add search function
		else if (!phonebook.exit.compare(name))
			std::cout << "-----------------help help------------------\n";
		if (name.empty())
			std::cout << "$$$$$$$ hello i'm null $$$$$$$\n";
	}
	// delete book;
	// system("leaks phonebook");
}