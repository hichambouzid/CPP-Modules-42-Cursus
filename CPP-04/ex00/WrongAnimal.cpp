/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:37:32 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 15:27:23 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default construtor of wrong animal was called\n";
	this->type = "Wrong_lion";
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "Wrong_Animal named: " << name << " was borned\n";
	this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy_Animal)
{
	std::cout << "Copy constructor of WrongAnimal class was called\n";
	this->type = copy_Animal.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & copy_Animal)
{
	std::cout << "Copy assignment operator of WrongAnimal was called\n";
	if (this != &copy_Animal)
	{
		this->type = copy_Animal.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: " << this->type << " makes sound\n";
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called\n";
}
