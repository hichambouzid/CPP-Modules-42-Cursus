/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:50:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 21:10:07 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
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
	int flag = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!this->m[i])
		{
			std::cout << "i ==========>>>> :" << i << "\n";
			this->m[i] = m;
			std::cout << "---------------------> " <<  m->getType() << "\n";
			flag = 1;
			break;
		}
	}

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
	std::cout << target.getName() << "-----------------------\n";
	if (idx >= 0 && idx < 4)
	{
		m[idx]->use(target);
	}
}
