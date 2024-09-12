/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:21:01 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/12 02:04:55 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
// #include <string.h>
#include <cstdlib>
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
	void search_contact();
	int handel_erros(std::string input);
	int search_and_display(int index_number);
	

};

#endif
