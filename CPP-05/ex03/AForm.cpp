/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:36:26 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:43:36 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const & name, int grade_to_sign, int grade_to_execute): _name(name),
	to_sign(grade_to_sign),to_exec(grade_to_execute)
{
	this->sign = false;
	std::cout << "Constructor Was called object under name: " << this->_name << std::endl;
	try
	{
		if (this->to_exec > 150 || to_sign > 150)
			throw ExceptionAForm(GradeTooHighException());
		else if (this->to_exec < 1 || this->to_sign < 1)
			throw ExceptionAForm(GradeTooLowException());
	}
	catch (const ExceptionAForm &e)
	{
		std::cerr << "Error :" << e.what();
	}
}

AForm::AForm(AForm const &copy_Aform) : _name(copy_Aform.getName()),
	to_sign(copy_Aform.getRSign()), to_exec(copy_Aform.getRExecute())
{
	this->sign = false;
}

std::string const AForm::GradeTooHighException()
{
	return (std::string("Grade too High for Bureaucrat requierement.\n"));
}

std::string const AForm::GradeTooLowException()
{
	return (std::string("Grade too Low for Bureaucrat Requierement.\n"));
}


std::string const & AForm::getName() const
{
	return (this->_name);
}

bool AForm::getPermessiom() const
{
	return (this->sign);
}

int AForm::getRSign() const
{
	return (this->to_sign);
}

int AForm::getRExecute() const
{
	return (this->to_exec);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->getRSign())
			throw ExceptionAForm(GradeTooLowException());
		else
			this->sign = true;
	}
	catch (const ExceptionAForm &e)
	{
		std::cerr << "Error: " << e.what();
	}
}

std::ostream &operator<<(std::ostream &os, AForm &Aform)
{
	os << "AForm name: " << Aform.getName() << ", sign: " << (Aform.getPermessiom() ? "true" : "false") <<
		", Grade to sign :" << Aform.getRSign() << ", Grade to execute: " << Aform.getRExecute() << ".\n";
	return (os);
}

AForm::~AForm()
{
	
}