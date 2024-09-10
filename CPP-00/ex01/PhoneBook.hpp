/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:21:01 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/10 17:09:26 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact contact[8];
	int numberofusers;
	int index;
public:
	PhoneBook();
	std::string add;
	std::string search;
	std::string exit;
	void add_new_contact();
};

#endif
