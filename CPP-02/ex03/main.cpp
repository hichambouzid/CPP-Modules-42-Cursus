/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:26:57 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 16:54:00 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point const Point1(0, 0);
	Point const Point2(5, 0);
	Point const Point3(2.5, 5);	
	Point const Point4(2, 2);

	bool checker = bsp(Point1, Point2, Point3, Point4);
	
	std::cout << checker << '\n';
	if (checker == true)
		std::cout << "The Point inside the triangle\n";
	else
		std::cout << "The Poitn out of triangle\n";
}