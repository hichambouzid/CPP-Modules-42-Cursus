/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:50:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/23 19:54:44 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	(this->name) = &name;
	std::cout << "Default constructor of Character called\n";
	for (int i = 0; i < 4; i++)
		this->m[i] = NULL;
}

std::string const & Character::getName() const
{
	return (*(this->name));
}

void Character::equip(AMateria* m)
{
	int flag = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!this->m[i])
		{
			this->m[i] = m;
			flag = 1;
			break;
		}
	}
	if (!flag)
		delete m;
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter &target)
{

}
