/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:40:58 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 16:06:48 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	std::string const _name;
	bool sign;
	int const to_sign;
	int const to_exec;
	public:
	Form(std::string const & name, int grade_to_sign, int grade_to_execute);
	std::string const & getName() const;
	bool getPermessiom() const;
	int getRSign() const;
	int getRExecute() const;
	char * const GradeTooHighException();
	char * const GradeTooLowException();
	beSigned();
	signForm();
};

std::ostream & operator<<(std::ostream &os, Form &form);
#endif