/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:23:12 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:42 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of Dog class called\n";
	this->type =  "Dog";	
}

Dog::Dog(std::string name)
{
	std::cout << "Object From Dog class was created under name: " << name << std::endl;
	this->type = name;
}

Dog::Dog(const Dog& copy_dog)
{
	std::cout << "Copy constructor of Dog class called\n";
	this->type = copy_dog.type;
}

void Dog::makeSound()
{
	std::cout << "Dog name: " << this->type << " makes sound\n";
}

Dog::~Dog()
{
	std::cout << "Destructor of dog class was called\n";
}