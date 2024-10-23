/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:50:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 22:41:05 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->index = 0;
	std::cout << "Default constructor of Character called\n";
	for (int i = 0; i < 4; i++)
	{
		this->m[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
		this->save[i]= NULL;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (index >= 0 && index <= 3)
	{
		std::cout << "name is :" << m->getType() << "\n";
		this->m[index++] = m;
	}
	else
		std::cout << "array of AMateria is full\n";
}

void Character::unequip(int idx)
{
	int i;

	i = 0;
	if (idx >= 0 && idx < 4 && m[idx])
	{
		for (; i  < 4; i++)
			if (!save[i])
				break;
		this->save[i] = m[idx]->clone();
	}
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << "Use character function called\n";
	if (idx >= 0 && idx < 4 && m[idx] != NULL)
	{
		m[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m[i])
			delete this->m[i];
	}
	std::cout << "Destructor of MateriaSource called\n";
}
