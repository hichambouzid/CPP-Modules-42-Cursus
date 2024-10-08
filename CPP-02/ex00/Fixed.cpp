/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:36:17 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/09 00:41:26 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_of_bits = 8;

Fixed::Fixed()
{
	std::cout << "Hello an object was created\n";
}

Fixed::Fixed(const Fixed &copy_fixed)
{
	
}

Fixed::Fixed(int number)
{
	this->fixed_point = number;
}

Fixed::~Fixed()
{
	
}

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	
}