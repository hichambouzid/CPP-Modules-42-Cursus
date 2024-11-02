/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:40:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:12:30 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
// #include "PresidentialPardonForm.hpp"
class Bureaucrat;

// class PresidentialPardonForm;
class AForm
{
	std::string const _name;
	bool sign;
	int const to_sign;
	int const to_exec;
	public:
	AForm(std::string const & name, int grade_to_sign, int grade_to_execute);
	AForm(AForm const & copy_Aform);
	AForm * operator=(AForm  const & copy_Aform);
	std::string const & getName() const;
	bool getPermessiom() const;
	int getRSign() const;
	int getRExecute() const;
	std::string const GradeTooHighException();
	std::string const GradeTooLowException();
	void beSigned(Bureaucrat & bureaucrat);
	virtual void execute(Bureaucrat const & executor)  = 0;
	class ExceptionAForm: public std::exception
	{
		std::string const _name;
		public:
			ExceptionAForm(std::string const &name) : _name(name){}
			const char *what() const throw() { return _name.c_str(); }
			~ExceptionAForm() _NOEXCEPT{}
	};
	virtual ~AForm();
};

std::ostream &operator<<(std::ostream &os, AForm &Aform);
#endif
