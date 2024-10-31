/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:16:43 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/30 23:30:55 by hibouzid         ###   ########.fr       */
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

const char  *Bureaucrat::GradeTooLowException()
{
	return ("Grade too low for Buraeucrat.\n");
}

const char * Bureaucrat::GradeTooHighException()
{
	return ("Grade to high for Bureaucrat.\n");
}

Bureaucrat::Bureaucrat(int grade, std::string Name): name(Name)
{
	std::cout << "Constructor of Bureaucrat was called\n";
	try{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
	}
	catch(const char *e)
	{
		std::cerr << e << '\n';
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
	std::cout << "Incremenent function called.\n";
	try
	{
		if (this->grade >= 1)
			throw Myexception("Grade to high for Bureaucrat.\n");
		else
			this->grade--;	
	}
	catch(const Myexception &e)
	{
		std::cerr << e.what();
	}
	
}
void Bureaucrat::decrement()
{
	std::cout << "Decrement function called.\n";
	try
	{
		if (this->grade == 150)
				throw Myexception("Grade too low for Buraeucrat.\n");
		else
			this->grade++;
	}
	catch(const Myexception &e)
	{
		std::cerr << e.what();
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