/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:09:55 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/11 16:29:59 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int handel_getline(std::istream& input)
{
	if (input.eof())
		return (-1);
	return (0);
}

int  main()
{	
	std::string		name;
	PhoneBook	phonebook;

	while (1)
	{
		std::getline(std::cin, name);
		if (!phonebook.add.compare(name))
			phonebook.add_new_contact();
		else if (!phonebook.search.compare(name))
			phonebook.search_contact();
		else if (!phonebook.exit.compare(name))
			exit(0);
		if (handel_getline(std::cin))
			break ;
		if (name.empty())
			std::cout << "$$$$$$$ hello i'm null $$$$$$$\n";
	}
}