/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:14:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:37:58 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (this->getPermessiom() == false  || executor.getGrade() > this->getRExecute())
		{
			throw ExceptionAForm(this->GradeTooLowException());
		}
	else
		std::cout <<  this->target << " has been robotomized successfully 50% of the time.\n";
	}
	catch(const   ExceptionAForm & e)
	{
		std::cerr << "Error: " << e.what();
	}
		
}

RobotomyRequestForm::~RobotomyRequestForm()
{}