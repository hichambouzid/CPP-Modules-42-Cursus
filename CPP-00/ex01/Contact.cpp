/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:58:57 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/10 17:13:11 by hibouzid         ###   ########.fr       */
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
	std::cout << "im in contact class\n";
	this->data_user[0] = "First	name: ";
	Contact::data_user[1] = "Last 	name: ";
	Contact::data_user[2] = "Nick	name: ";
	Contact::data_user[3] = "Phone 	number: ";
	Contact::data_user[4] = "Secret : ";
	n_index = -1;
}

int	Contact::add_if_valid_contact(int index)
{
	std::string input;
	int flag;
	
	flag = 1;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->data_user[i];
		std::getline(std::cin, input);
		if (input.empty())
		flag = 0;
		this->data_user[i] += input;
	}
	if (flag)
	{
		std::cout << "-----> Has been added successfully <------\n";
		return (flag);
	}
	Contact();
	return (flag);
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