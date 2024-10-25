/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:56:50 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 11:15:34 by hibouzid         ###   ########.fr       */
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
	*this = copy_Cat;
}

Cat & Cat::operator=(const Cat &copy_cat)
{
	std::cout << "Copy assignemt operator called\n";
	if (this != &copy_cat)
	{
		this->type = copy_cat.type;
		this->Brain_cat = new Brain;
		for (int i = 0; i < 100; i++)
			this->Brain_cat->setNAme(i, copy_cat.Brain_cat->getNAme(i));
	}
	return (*this);
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
