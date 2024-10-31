/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:09:45 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/31 14:24:13 by hibouzid         ###   ########.fr       */
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
		Bureaucrat();
		Bureaucrat(Bureaucrat const & copy_Bureaucrat);
		Bureaucrat * operator=(Bureaucrat const & copy_Bureaucrat);
		Bureaucrat(int grade, std::string  Name);
		const char *GradeTooLowException();
		const char *GradeTooHighException();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
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