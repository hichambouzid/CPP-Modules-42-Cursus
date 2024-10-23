/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:10:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 19:57:55 by hibouzid         ###   ########.fr       */
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
	std::cout << "* heatls " << target.getName() << "\'s wounds*\n";
}

Cure::~Cure()
{
	std::cout << "Destructor of Cure called\n";
}
