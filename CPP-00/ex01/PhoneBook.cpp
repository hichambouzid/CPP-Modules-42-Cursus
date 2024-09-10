/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:09:42 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/10 17:13:57 by hibouzid         ###   ########.fr       */
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
