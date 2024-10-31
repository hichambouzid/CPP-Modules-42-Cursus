/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:31 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 17:48:14 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat hicham(1, "hicham");
	// Bureaucrat hic(hicham);m
	hicham.increment();
	hicham.increment();
	hicham.increment();
	hicham.decrement();
	std::cout << hicham << std::endl;
	hicham.decrement();
	std::cout << hicham << std::endl;

}
