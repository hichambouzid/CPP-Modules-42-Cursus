/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:50:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/25 12:22:56 by hibouzid         ###   ########.fr       */
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

bool Character::cmp_address(void *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->m[i])
			return (true);
		else if (this->m[i] == m)
			return (false);
	}
	return (true);
}

void Character::equip(AMateria* m)
{
	if (index >= 0 && index <= 3)
	{
		// std::cout << "name is :" << m->getType() << "\n";
		if (cmp_address(m) == true)
			this->m[index++] = m;
		else
			std::cerr << "You can't add the same AMateria\n";
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
		delete m[idx];
		m[idx] = 0; 
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

Character & Character::operator=(Character const &Character_copy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &Character_copy)
	{
		for (int i = 0; i < 4; i++)
			if(Character_copy.m[i]) 
				this->m[i] = Character_copy.m[i]->clone();
		for (int i = 0; i < 100; i++)
		{
			if (Character_copy.save[i])
				this->save[i] = Character_copy.save[i]->clone();
		}
		this->index = Character_copy.index;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m[i])
			delete this->m[i];
	}
		for (int i = 0; i < 100; i++)
	{
		if (this->save[i])
			delete this->save[i];
	}
	std::cout << "Destructor of MateriaSource called\n";
}
