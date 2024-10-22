/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:37:32 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 18:57:23 by hibouzid         ###   ########.fr       */
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
