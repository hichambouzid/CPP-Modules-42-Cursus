/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:58:57 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/12 17:37:32 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	Contact::data_user[0] = "First	name: ";
	Contact::data_user[1] = "Last	 name: ";
	Contact::data_user[2] = "Nick	 name: ";
	Contact::data_user[3] = "Phone 	number: ";
	Contact::data_user[4] = "Secret : ";
	n_index = -1;
}

void Contact::rebase_Contact()
{
	Contact::data_user[0] = "First	name: ";
	Contact::data_user[1] = "Last	 name: ";
	Contact::data_user[2] = "Nick	 name: ";
	Contact::data_user[3] = "Phone 	number: ";
	Contact::data_user[4] = "Secret : ";
	n_index = -1;
}

int ft_isprintable(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isprint(str[i]))
			return (0);
	}
	return (1);
}

int	Contact::add_if_valid_contact(int index)
{
	std::string input;
	int flag;
	char *checker;
	
	flag = 1;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->data_user[i];
		std::getline(std::cin, input);
		if (input.empty() || !ft_isprintable(input) || (i == 4 && *checker))
		flag = 0;
		if (std::cin.eof())
			return (0);
		if (i == 3)
			strtol(input.c_str(), &checker, 10);
		this->data_user[i] += input;
	}
	if (flag)
	{
		n_index = index;
		std::cout << "-----> Has been added successfully <------\n";
		return (flag);
	}
	rebase_Contact();
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
		// for (int i = 0; i < 10 - len; i++)
			std::cout << std::setw(10 - len) << ' ';
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
}
