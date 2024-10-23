/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:20:53 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 18:21:09 by hibouzid         ###   ########.fr       */
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


Ice::~Ice()
{
	std::cout << "Desrtuctor of Ice called\n";
}