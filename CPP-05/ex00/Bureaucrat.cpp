/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:16:43 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/28 16:39:14 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::string  Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);	
}

void Bureaucrat::increment()
{	
	std::cout << "Incremenent function called.\n";
	try
	{
		if (this->grade >= 1)
			throw GradeTooHighException();
		else
			this->grade--;	
	}
	catch(const char *e)
	{
		printf("================\n");
		std::cerr << e ;
	}
	
}
void Bureaucrat::decrement()
{
	std::cout << "Decrement function called.\n";
	try
	{
		if (this->grade == 150)
				throw GradeTooLowException();
		else
			this->grade++;
	}
	catch(const char *e)
	{
		std::cerr << e ;
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