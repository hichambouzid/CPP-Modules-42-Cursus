/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:09:45 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/28 19:32:05 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
 	const std::string name;
	int grade;
	public:
		Bureaucrat(int grade, std::string  Name);
		const char *GradeTooLowException();
		const char *GradeTooHighException();
		std::string getName();
		int getGrade();
		void increment();
		void decrement();
		~Bureaucrat();
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat);

class Myexception : public std::exception
{
	std::string const _name;
	public:
	// Myexception(){}
	Myexception(std::string const &exceptionn) : _name(exceptionn){};
	const char* what() const throw()  {return _name.c_str();}
	~Myexception()_NOEXCEPT{}
};

#endif