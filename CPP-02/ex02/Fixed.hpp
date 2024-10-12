/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:29:21 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/12 02:00:57 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	int number; 
	public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);

	// float operator<<(Fixed &fixed);
	bool operator<(const Fixed& Fixed1) const;
	bool operator<=(const Fixed& Fixed1) const;
	bool operator>(const Fixed& Fixed1) const;
	bool operator>=(const Fixed& Fixed1) const;
	bool operator==(const Fixed& Fixed1) const;
	bool operator!=(const Fixed& Fixed1) const;

	Fixed operator+(const Fixed& Fixed1) const;
	Fixed operator-(const Fixed& Fixed1) const;
	Fixed operator*(const Fixed& Fixed1) const;
	Fixed operator/(const Fixed& Fixed1) const;


	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();
	
	float toFloat( void ) const;

	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
};

std::ostream& operator<<(std::ostream &os, const Fixed& copy_fixed);
#endif