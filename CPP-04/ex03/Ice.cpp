/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:53 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 18:48:23 by hibouzid         ###   ########.fr       */
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

void Ice::use(ICharacter &target)
{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
	std::cout << "Desrtuctor of Ice called\n";
}
