/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:21:38 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 22:35:40 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Default constructor of MateriaSource called\n";
	for (int i = 0; i < 4; i++)
		this->array_Materia[i] = NULL;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (!type.compare("ice"))
		 return (new Ice());
	else if (!type.compare("cure"))
		return (new Cure());
	return (0);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->array_Materia[i])
		{
			this->array_Materia[i] = m;
			return ;
		}
	}
	std::cout << "There is no place to add new AMateria\n";
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->array_Materia[i])
			delete this->array_Materia[i];
	}
	std::cout << "Destructor of MateriaSource called\n";
}
