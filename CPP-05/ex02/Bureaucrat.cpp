/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:16:43 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 19:18:33 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default")
{
	this->grade = 75;
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy_Bureaucrat) : name(copy_Bureaucrat.getName())
{
	std::cout << "Copy constructor was called\n";
	this->grade = copy_Bureaucrat.getGrade();
}

Bureaucrat * Bureaucrat::operator=(Bureaucrat const & copy_Bureaucrat)
{
	std::cout << "Copy assignment operator was called\n";
	if (this != &copy_Bureaucrat)
	{
		*this = Bureaucrat( copy_Bureaucrat.getGrade(), copy_Bureaucrat.getName());

	}
	return (this);
}

std::string const  Bureaucrat::GradeTooLowException()
{
	return (std::string("Grade too low for Buraeucrat.\n"));
}

std::string const  Bureaucrat::GradeTooHighException()
{
	return (std::string("Grade to high for Bureaucrat.\n"));
}

Bureaucrat::Bureaucrat(int grade, std::string Name): name(Name)
{
	std::cout << "Constructor of Bureaucrat was called\n";
	try{
	if (grade > 150)
		throw Myexception(GradeTooLowException());
	else if (grade < 1)
		throw Myexception(GradeTooHighException());
	else
		this->grade = grade;
	}
	catch (const Myexception &e)
	{
		std::cerr << "Error :" <<  e.what();
	}
}

std::string  Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	std::cout << "+++++Incremenent function called.+++++\n";
	try
	{
		if (this->grade >= 1)
			throw Myexception(GradeTooHighException());
		else
			this->grade--;
	}
	catch (const Myexception &e)
	{
		std::cerr << "Error :" <<  e.what();
	}
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getPermessiom() == true)
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
	{
		try
		{
			if (form.getRSign() < getGrade())
				throw Myexception(GradeTooHighException());
			else
				throw Myexception(std::string("the from doesn't passe to bureaucrat.\n"));
		}
		catch(const Myexception& e)
		{
			std::cerr << this->name << " couldn't sign "  << form.getName() << " becuase " << e.what();
		}

	}
}

void Bureaucrat::decrement()
{
	std::cout << "-----Decrement function called.-----\n";
	try
	{
		if (this->grade > 150)
			throw Myexception(GradeTooLowException());
		else
			this->grade++;
	}
	catch (const Myexception &e)
	{
		std::cerr << "Error :" <<  e.what();
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of Bureaucrat class was called.\n";
}
