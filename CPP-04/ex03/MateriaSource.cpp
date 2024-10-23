/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:21:38 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 18:06:15 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (!type.compare("ice"))
		 return (new Ice());
	else
		return (new Cure());
}

void MateriaSource::learnMateria(AMateria*)
{
	
}