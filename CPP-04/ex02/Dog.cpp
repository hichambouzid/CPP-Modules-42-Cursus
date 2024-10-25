/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:23:12 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 11:12:53 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of Dog class called & object from Brain was created\n";
	this->Brain_Dog = new Brain;
	this->type =  "Dog";	
}

Dog::Dog(std::string name)
{
	std::cout << "Object From Dog class was created under name: " << name << std::endl;
	std::cout << "Object from Brain class was created\n";
	this->Brain_Dog = new Brain;
	this->type = name;
}

Dog::Dog(const Dog& copy_dog)
{
	std::cout << "Copy constructor of Dog class called\n";
	*this = copy_dog;
}

Dog & Dog::operator=(const Dog & copy_dog)
{
	std::cout << "Copy constructor of Dog class called\n";
	if (this != &copy_dog)
	{
		this->type = copy_dog.type;
		this->Brain_Dog = new Brain;
		for (int i = 0; i < 100; i++)
			this->Brain_Dog->setNAme(i, copy_dog.Brain_Dog->getNAme(i));
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog name: " << this->type << " makes sound\n";
}

Dog::~Dog()
{
	delete this->Brain_Dog;
	std::cout << "Destructor of dog class was called\n";
}