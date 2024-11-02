/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:21:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:29:18 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
// #include " PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"

class AForm;
class Bureaucrat
{
 	const std::string name;
	int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & copy_Bureaucrat);
		Bureaucrat * operator=(Bureaucrat const & copy_Bureaucrat);
		Bureaucrat(int grade, std::string  Name);
		std::string const GradeTooLowException();
		std::string const GradeTooHighException();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		void signAForm(AForm &Aform);
		void executeForm(AForm  & form);
		~Bureaucrat();
		class Myexception : public std::exception
		{
			std::string const _name;
			public:
			// Myexception(){}
			Myexception(std::string const &exceptionn) : _name(exceptionn){};
			const char* what() const throw()  {return _name.c_str();}
			~Myexception()_NOEXCEPT{}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat);


#endif
