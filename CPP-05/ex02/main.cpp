/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:31 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 19:18:08 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat makadem(148, "mkadem");
	Form form("3a9ed zdiad", 147, 12);
	// Bureaucrat hic(hicham);m
	std::cout << form ;
	form.beSigned(makadem);
	std::cout << form;
	makadem.signForm(form);
	// hicham.increment();
	// hicham.increment();?
	// hicham.increment();
	// hicham.decrement();
	// std::cout << hicham << std::endl;
	// hicham.decrement();
	std::cout << makadem << std::endl;

}
