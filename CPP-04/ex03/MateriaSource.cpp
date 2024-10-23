/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:21:38 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 20:02:09 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (!type.compare("ice"))
		 return (new Ice());
	else if (type.compare("cure"))
		return (new Cure());
	return (0);
}

void MateriaSource::learnMateria(AMateria*)
{

}
