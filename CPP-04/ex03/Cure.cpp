/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:10:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 17:12:13 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default constructor of cure called\n";
}

Cure::Cure(const Cure & copy_cure)
{
	std::cout << "Copy constructor of Cure class was called\n";
	*this = copy_cure;
}

Cure & Cure::operator=(const Cure & copy_cure)
{
	std::cout << "Copy assignment operato of cure was called\n";
	if (this != &copy_cure)
	{
		this->type = copy_cure.type;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	// std::cout << "11111111111\n";
	std::cout << "* heatls " << target.getName() << "\'s wounds*\n";
}

Cure::~Cure()
{
	std::cout << "Destructor of Cure called\n";
}
