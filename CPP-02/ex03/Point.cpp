/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:20:12 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 00:07:39 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	//std::cout << "Default constructor called\n";
}

Point::Point(float v_x, float v_y) : x(v_x), y(v_y)
{
	//std::cout << "parametrized constructor called & using initialization list\n";
}

Point::Point(const Point& copy_point)
{
	//std::cout << "copy constructor called\n";
	*this = copy_point;
}

Point& Point::operator=(const Point &copy_point)
{
	if (this != &copy_point)
	{
		//std::cout << "Copy assignment operator overload called\n";
		//std::cout << "x and y is a const we can't initiatlize them\n";
	}
	return (*this);
}

int Point::get_x() const
{
	return (x.toInt());
}

int Point::get_y() const
{
	return (y.toInt());	
}

Point::~Point()
{
	//std::cout << "Destructor called\n";
}