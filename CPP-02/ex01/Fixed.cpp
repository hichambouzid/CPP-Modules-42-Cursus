/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:28:20 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/10 13:49:33 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int number)
{
	this->fixed_point = number * (1 << fractional_bits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float number)
{
	this->fixed_point = roundf(number * (1 << fractional_bits));	
	std::cout << "Float constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& copy_fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &copy_fixed)
		this->fixed_point = copy_fixed.fixed_point;
	return (*this);
					
}

std::ostream& operator<<(std::ostream &os, const Fixed& copy_fixed)
{
	// std::iostream os;
	
	os <<  copy_fixed.toFloat();
	return (os);
}

Fixed::Fixed(const Fixed& copy_fixed)
{
	std::cout << "Copy constructor called\n";
	*this = copy_fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (1 << fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point / (1 << fractional_bits));
}
