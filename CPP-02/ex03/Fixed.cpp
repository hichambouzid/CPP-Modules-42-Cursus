/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:39:07 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 16:36:35 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "An object was created\n";
	this->number = 0;
}

Fixed::Fixed(const int number)
{
	this->number = number * (1 << 8);
}

Fixed::Fixed(const float number)
{
	this->number = roundf(number * (1 << 8));
}

bool Fixed::operator<(const Fixed& Fixed1) const
{
	return (this->number < Fixed1.number);
}

bool Fixed::operator<=(const Fixed& Fixed1) const
{
	return ((this->number < Fixed1.number) || (this->number == Fixed1.number));
}

bool Fixed::operator>(const Fixed& Fixed1) const
{
	return ((this->number > Fixed1.number));
}

bool Fixed::operator>=(const Fixed& Fixed1) const
{
	return ((this->number > Fixed1.number) || (this->number == Fixed1.number));
}

bool Fixed::operator==(const Fixed& Fixed1) const
{
	return (this->number == Fixed1.number);
}

bool Fixed::operator!=(const Fixed& Fixed1) const
{
	return (this->number != Fixed1.number);	
}

Fixed Fixed::operator+(const Fixed& Fixed1) const
{
	return (Fixed((this->number + Fixed1.number) / (1 << 8)));
}

Fixed Fixed::operator-(const Fixed& Fixed1) const
{
	return (Fixed((this->number - Fixed1.number) / (1 << 8)));
}

Fixed Fixed::operator*(const Fixed& Fixed1) const
{
	return (Fixed((float)(this->number * Fixed1.number )/ (1 << 8)));
}

Fixed Fixed::operator/(const Fixed& Fixed1) const
{
	return (Fixed((this->number / Fixed1.number) / (1 << 8)));	
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
		this->number++;
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->number++;
	return (*this);	
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
		this->number--;
	return (tmp);
	
}

Fixed Fixed::operator--()
{
	this->number--;
	return (*this);		
}

float Fixed::toFloat( void ) const
{
	return (((float)this->number / (1 << 8)));
}

std::ostream& operator<<(std::ostream &os, const Fixed& copy_fixed)
{	
	os <<  copy_fixed.toFloat();
	return (os);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.number < fixed2.number)
		return (fixed1);
	return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.number < fixed2.number)
			return (fixed1);
	return (fixed2);

}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.number < fixed2.number)
		return (fixed2);
	return (fixed1);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.number < fixed2.number)
		return (fixed2);
	return (fixed1);

}

int Fixed::toInt( void ) const
{
	return (this->number / (1 << 8));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}