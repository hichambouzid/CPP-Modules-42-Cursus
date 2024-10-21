/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:56:50 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 17:08:20 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout <<  "Default Constructor of Cat class called\n";
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
	std::cout << "Cat under name: " << name << " was borned\n";
	this->type = name;
}

Cat::Cat(const Cat& copy_Cat)
{
	std::cout << "Copy constructor called\n";
	this->type = copy_Cat.type;
}

void Cat::makeSound() const
{
	std::cout << "Cat name: " << this->type << " makes sound\n";
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat class called\n";
}
