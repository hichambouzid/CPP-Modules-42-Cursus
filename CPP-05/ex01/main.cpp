/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:31 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/30 23:31:36 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat hicham(149, "hicham");
	Bureaucrat hic(hicham);
	hicham.increment();
	hicham.increment();
	hicham.increment();
	hicham.decrement();
	std::cout << hicham << std::endl;
	hicham.decrement();
	std::cout << hicham << std::endl;
	
}