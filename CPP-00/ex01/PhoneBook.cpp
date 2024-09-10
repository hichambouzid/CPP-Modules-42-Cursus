/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:09:42 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/11 00:39:11 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook::add = "ADD";
	PhoneBook::search = "SEARCH";
	PhoneBook::exit = "EXIT";
	PhoneBook::numberofusers = 0;
	PhoneBook::index = 0;
}

void PhoneBook::add_new_contact()
{
	if (numberofusers < 8)
	{
		if (contact[index].add_if_valid_contact(index))
		{
			index++;
			numberofusers++;
		}
	}
	else if (numberofusers >= 8)
	{
		if (contact[numberofusers % 8].add_if_valid_contact(numberofusers % 8))
			numberofusers++;
	}
	return ;
}

int PhoneBook::handel_erros(std::string input)
{
	if (input.empty())
	{
		std::cout << "No input gived to search program by ...\n";
		return (-1);		
	}
	try
	{
		 if (std::stoi(input) > 8 || std::stoi(input) < 0)
		{
			std::cout << "The index is out of range .\n";
			return (-1);
		}/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}
	
	// std::cout << "error \n";
	return (std::stoi(input));
}


int PhoneBook::search_and_display(int index_number)
{
	int number_ret;

	number_ret = contact[index_number].check_index(); 
	if (number_ret == -1)
		std::cout << "check check i'm here\n";
	else
	{
		contact[index_number].display_content();
	}
	return (number_ret);
}

void PhoneBook::search_contact()
{
	std::string input;
	int index_number;

	if (index == 0 || numberofusers == 0)
	{
		std::cout << "-----> The phone book is empty !!! <-----\n";
		return ;
	}
	for (int i = 0; i < index; i++)
	{
		contact[i].display_content();
		std::cout << '\n';
	}
	while (1)
	{
		std::getline(std::cin, input);
		index_number = handel_erros(input);
		if (index_number == -1)
			break ;
		search_and_display(index_number);
	}	
}
