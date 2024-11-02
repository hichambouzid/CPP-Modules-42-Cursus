/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:31 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:39:16 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat  hicham(1, "hicham");
	std::cout << "**********************ShrubberyCreationForm************************\n";
	AForm  *form1 = new  ShrubberyCreationForm("little_tree");
	form1->beSigned(hicham);
	hicham.executeForm(*form1);
	std::cout << "**********************ShrubberyCreationForm************************\n\n";
	std::cout << "**********************RobotomyRequestForm************************\n";
	AForm  *form2 = new RobotomyRequestForm("robot");
	form2->beSigned(hicham);
	hicham.executeForm(*form2);
	std::cout << "**********************RobotomyRequestForm************************\n\n";
	std::cout << "********************** PresidentialPardonForm************************\n";
	AForm  *form3 = new PresidentialPardonForm("Pardon");
	form3->beSigned(hicham);
	hicham.executeForm(*form3);
	std::cout << "********************** PresidentialPardonForm************************\n";
	delete form1;
	delete form2;
	delete form3;
		
}