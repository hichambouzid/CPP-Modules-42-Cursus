/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:10:46 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 17:29:21 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;
class RobotomyRequestForm: public AForm
{
	std::string target;
	public:
		RobotomyRequestForm(std::string target);
		void  execute(Bureaucrat const & executor);
		~RobotomyRequestForm();
};

#endif