/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:17:59 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:36:22 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (this->getPermessiom() == false  || executor.getGrade() > this->getRExecute())
			throw  ExceptionAForm(this->GradeTooLowException());
		else
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
	}
	catch(const   ExceptionAForm& e)
	{
		std::cerr << e.what();
	}
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}