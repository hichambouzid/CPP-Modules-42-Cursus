/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:21:38 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 12:23:51 by hibouzid         ###   ########.fr       */
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

bool MateriaSource::cmp_address(void *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->array_Materia[i])
			return (true);
		else if (this->array_Materia[i] == m)
			return (false);
	}
	return (true);
}


void MateriaSource::learnMateria(AMateria *m)
{
	if(cmp_address(m) == false)
	{
		std::cout << "===== you can't add the same Materiasource ========\n";
		return ;
	}
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
