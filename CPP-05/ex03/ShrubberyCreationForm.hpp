/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:57:03 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:27:14 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

// class AForm;
class  ShrubberyCreationForm: public AForm
{
	std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		// void Shrubbery_File(std::string target);
		void execute(Bureaucrat const & executor);
		~ShrubberyCreationForm();
		
};
#endif