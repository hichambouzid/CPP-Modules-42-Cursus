/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:10:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/24 02:24:51 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default constructor of cure called\n";
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
