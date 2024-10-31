/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:36:26 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 19:48:14 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(std::string const & name, int grade_to_sign, int grade_to_execute): _name(name),
	to_sign(grade_to_sign),to_exec(grade_to_execute)
{
	this->sign = false;
	std::cout << "Constructor Was called object under name: " << this->_name << std::endl;
	try
	{
		if (this->to_exec > 150 || to_sign > 150)
			throw ExceptionForm(GradeTooHighException());
		else if (this->to_exec < 1 || this->to_sign < 1)
			throw ExceptionForm(GradeTooLowException());
	}
	catch (const ExceptionForm &e)
	{
		std::cerr << "Error :" << e.what();
	}
}

Form::Form(Form  const & copy_form)
{
	*this = copy_form;
}

Form & Form::operator=(Form const &copy_form)
{
	if (this != &copy_form)
		*this = Form(copy_form.getName(), copy_form.getRSign(), copy_form.getRExecute());
	return (*this);
}


std::string const Form::GradeTooHighException()
{
	return (std::string("Grade too High for Bureaucrat requierement.\n"));
}

std::string const Form::GradeTooLowException()
{
	return (std::string("Grade too Low for Bureaucrat Requierement.\n"));
}


std::string const & Form::getName() const
{
	return (this->_name);
}

bool Form::getPermessiom() const
{
	return (this->sign);
}

int Form::getRSign() const
{
	return (this->to_sign);
}

int Form::getRExecute() const
{
	return (this->to_exec);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->getRSign())
			throw ExceptionForm(GradeTooLowException());
		else
			this->sign = true;
	}
	catch (const ExceptionForm &e)
	{
		std::cerr << "Error: " << e.what();
	}
}

std::ostream &operator<<(std::ostream &os, Form &form)
{
	os << "Form name: " << form.getName() << ", sign: " << (form.getPermessiom() ? "true" : "false") <<
		", Grade to sign :" << form.getRSign() << ", Grade to execute: " << form.getRExecute() << ".\n";
	return (os);
}

