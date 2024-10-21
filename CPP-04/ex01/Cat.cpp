/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:56:50 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 23:50:21 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout <<  "Default Constructor of Cat class called & brain_cat object created\n";
	this->Brain_cat = new Brain;
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
	std::cout << "Cat under name: " << name << " was borned & brain_cat object created\n";
	this->Brain_cat = new Brain;
	this->type = name;
}

Cat::Cat(const Cat& copy_Cat)
{
	std::cout << "Copy constructor called\n";
	this->Brain_cat = copy_Cat.Brain_cat;
	this->type = copy_Cat.type;
}

void Cat::makeSound() const
{
	std::cout << "Cat name: " << this->type << " makes sound\n";
}

Cat::~Cat()
{
	delete this->Brain_cat;
	std::cout << "Destructor of Cat class called\n";
}
