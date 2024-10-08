/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:36:39 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/09 16:15:06 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
		int fixed_point;
		static const int fractional_of_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy_Fixed);
		Fixed& operator=(const Fixed &copy_other); 
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif