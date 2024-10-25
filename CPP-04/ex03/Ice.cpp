/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:53 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 17:13:07 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructer called\n";
}

Ice* Ice::clone() const
{
	return (new Ice);
}

Ice::Ice(const Ice & copy_Ice)
{
	std::cout << "Copy constructor of Ice class was called\n";
	*this = copy_Ice;
}

Ice & Ice::operator=(const Ice & copy_Ice)
{
	std::cout << "Copy assignment operato of Ice was called\n";
	if (this != &copy_Ice)
	{
		this->type = copy_Ice.type;
	}
	return (*this);
}

void Ice::use(ICharacter &target)
{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
	std::cout << "Desrtuctor of Ice called\n";
}
