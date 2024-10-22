/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:10:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/22 19:29:11 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default constructor of cure called\n";	
}

Cure& Cure::clone()
{
	return (new Cure);
}
