/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:36:17 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:50 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_of_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy_fixed) : fixed_point(copy_fixed.fixed_point)
{
	std::cout << "Copy constructor called" << std::endl;
	// copy_fixed->fixed_point = this->fixed_point;
}

Fixed& Fixed::operator=(const Fixed &copy_fixed)
{
	if (this != &copy_fixed)
		
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	
}