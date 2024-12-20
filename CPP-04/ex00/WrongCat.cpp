/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:31:06 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 15:24:51 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WorngCat was created\n";
	this->type = "WrongCat_tom";
}

WrongCat::WrongCat(std::string name)
{
	std::cout << "Wrong cat nameed: " << name  << " was borned\n";
}

WrongCat::WrongCat(const WrongCat &copy_WrongCat)
{
	std::cout << "Copy constructor called\n";
	this->type = copy_WrongCat.type;
}

WrongCat & WrongCat::operator=(const WrongCat &copy_WrongCat)
{
	std::cout << "Copy assignment operator of WrongCat was called\n";
	if (this != &copy_WrongCat)
		this->type = copy_WrongCat.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WongCat object: " << this->type << " makes sound\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of wrongCat class called\n";
}

