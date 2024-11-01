/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:40:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 21:07:56 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	std::string const _name;
	bool sign;
	int const to_sign;
	int const to_exec;
	public:
	Form(std::string const & name, int grade_to_sign, int grade_to_execute);
	Form(Form const & copy_form);
	Form * operator=(Form  const & copy_form);
	std::string const & getName() const;
	bool getPermessiom() const;
	int getRSign() const;
	int getRExecute() const;
	std::string const GradeTooHighException();
	std::string const GradeTooLowException();
	void beSigned(Bureaucrat & bureaucrat);
	class ExceptionForm: public std::exception
	{
		std::string const _name;
		public:
			ExceptionForm(std::string const &name) : _name(name){}
			const char *what() const throw() { return _name.c_str(); }
			~ExceptionForm() _NOEXCEPT{}
	};
};

std::ostream &operator<<(std::ostream &os, Form &form);
#endif
