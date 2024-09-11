/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:58:57 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/11 16:22:17 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
//  Phonebook()
// {
// 	std::cout << "hello mother fucker";
// }

Contact::Contact()
{
	// std::cout << "im in contact class\n";
	Contact::data_user[0] = "First	name: ";
	Contact::data_user[1] = "Last	 name: ";
	Contact::data_user[2] = "Nick	 name: ";
	Contact::data_user[3] = "Phone 	number: ";
	Contact::data_user[4] = "Secret : ";
	n_index = -1;
}

int	Contact::add_if_valid_contact(int index)
{
	std::string input;
	int flag;
	
	flag = 1;
	// std::getline(std::cin, input);
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->data_user[i];
		std::getline(std::cin, input);
		if (input.empty())
		flag = 0;
		if (std::cin.eof())
			return (0);
		this->data_user[i] += input;
	}
	if (flag)
	{
		n_index = index;
		std::cout << "-----> Has been added successfully <------\n";
		return (flag);
	}
	Contact();
	return (flag);
}

int Contact::check_index()
{
	if (n_index == -1)
		return (-1);
	return (n_index);
}


void help_to_display(std::string data, int len)
{
	if (len < 10)
	{
		for (int i = 0; i < 10 - len; i++)
			std::cout << " ";
		std::cout << data;
		return ;
	}
	else
		std::cout << data.substr(0, 9);
	std::cout << ".";	
}

void Contact::display_content()
{
	for (int i = 0; i < 3; i++)
	{
		if (data_user[i].length() - 12 == 10)
			std::cout << data_user[i];
		else if (data_user[i].length() - 12 != 10)
		{
			help_to_display(data_user[i].substr(12),
				data_user[i].substr(12).length());
		}
		if (i != 2)
			std::cout << "|";
	}
	std::cout << std::endl;
}

// void Contact::reconfig_the_object()
// {
// 	Contact();
// }
// void Contact::add_contact(Contact::string data_user[5])
// {
// 	int index;
	
// 	index = 0;
// 	while (index < 5)
// 	{
// 		std::cout << data_user[index];
// 	}
// }

// void Cona