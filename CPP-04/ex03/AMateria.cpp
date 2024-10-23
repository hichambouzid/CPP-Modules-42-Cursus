
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:29:08 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/22 18:43:00 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
	std::string name = "Default_AMateria";
	std::cout << "Default Constructor called of AMateria\n";
	this->type =  &name;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Constructor AMateria: " << type << " was created\n";
	this->type = &type;
}

std::string const & AMateria::getType() const
{
	return (*this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "h=================================>\n";
		std::cout << "* what i do with this " << target.getName() << " *\n";
}

AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria:" << this->type << " Destroyed\n";
}
