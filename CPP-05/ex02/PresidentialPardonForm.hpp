/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:16:07 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/03 16:58:21 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;
class PresidentialPardonForm : public  AForm
{
	std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy_PresidentialPardonForm);
		PresidentialPardonForm * operator=(PresidentialPardonForm const & copy_PresidentialPardonForm);
		void execute(Bureaucrat const & executor);
		~PresidentialPardonForm();
};

#endif