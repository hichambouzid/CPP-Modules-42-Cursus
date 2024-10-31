/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:36:26 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 16:06:51 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(std::string const & name, int grade_to_sign, int grade_to_execute): _name(name),
	to_sign(grade_to_sign),to_exec(grade_to_execute)
{
	this->sign = false;
	std::cout << "Constructor Was called\n";
}

char * const Form::GradeTooHighException()
{
	
}

char * const Form::GradeTooLowException()
{
	
}


std::string const & Form::getName() const
{
	return (this->_name);
}

bool Form::getPermessiom() const
{
	return (this->permission);
}

int Form::getRSign() const
{
	return (this->to_sign);
}

int Form::getRExecute() const
{
	return (this->to_exec);
}


