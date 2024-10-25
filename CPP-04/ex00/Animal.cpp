/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:01:28 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 14:54:43 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor Animal class called\n";
	this->type = "lion";
}

Animal::Animal(std::string name)
{
	std::cout << "Animal with name: " << name << " was borned\n";
	this->type = name;
}

Animal::Animal(const Animal& copy_animal)
{
	std::cout << "Copy construtor called\n";
	*this = copy_animal;
}

Animal & Animal::operator=(const Animal & copy_animal)
{
	std::cout << "Copy assignment operator of Animal Called\n";
	if (this != &copy_animal)
	{
		this->type = copy_animal.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "The king of forrest: " << this->type << " singing\n";
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal under name: " << this->type << " was destroyed\n";	
}