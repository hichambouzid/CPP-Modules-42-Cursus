/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:26:57 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/15 00:20:53 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	bool checker = bsp(Point(0, 0), Point(5, 0), Point(2, 5), Point(12, 12));
	if (checker == true)
		std::cout << "The Point inside the triangle\n";
	else
		std::cout << "The Poitn out of triangle\n";
}