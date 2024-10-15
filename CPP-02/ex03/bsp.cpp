/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:47:16 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 16:54:43 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int  get_sign(Point const a, const Point b, const Point c)
{
	return ((a.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - (b.get_x() - c.get_x()) * (a.get_y() - c.get_y()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int sign1 = get_sign(point, a, b);
	int sign2 = get_sign(point, b, c);
	int sign3 = get_sign(point, c, a);
	return ((sign1 < 0 && sign2 < 0 && sign3 < 0) || (sign1 > 0 && sign2 > 0 && sign3 > 0));
}