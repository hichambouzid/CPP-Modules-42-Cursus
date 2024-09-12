/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:20:18 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/12 17:36:58 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
// #include "PhoneBook.hpp"

class Contact{
private:
	std::string data_user[5];
	int n_index;
public:
	Contact();
	int	add_if_valid_contact(int index);
	int check_index(void);
	void display_content();
	void rebase_Contact();
	// int handel_erros(std::string input);

};

#endif