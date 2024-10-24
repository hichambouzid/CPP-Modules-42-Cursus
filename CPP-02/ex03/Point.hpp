/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:13:45 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 17:03:55 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	const Fixed x;
	const Fixed y;
	public:
		Point();
		Point(float v_x, float v_y);
		Point(const Point& copy_point);
		Point& operator=(const Point &copy_point);
		float get_x() const;
		float get_y() const;
		~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif