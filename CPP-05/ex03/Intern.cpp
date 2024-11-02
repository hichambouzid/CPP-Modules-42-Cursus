/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:02:50 by hibouzid          #+#    #+#             */
/*   Updated: 2024/11/02 21:27:19 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm *ft_shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *ft_robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}
 
AForm *ft_presindential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

// Intern::Intern(std::string name, std::string target)
// {
// }

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string s[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm * (*Function[3]) (std::string) = {ft_shrubbery, ft_robotomy, ft_presindential};
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(s[i]) == 0)
		{
			std::cout << "Intern creates " << name << std::endl;  
			return (Function[i](target));
		}
	}
	std::cout << "This type of forms not found .\n";
	return (NULL);
}