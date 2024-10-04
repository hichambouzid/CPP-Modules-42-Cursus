/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:14:11 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/04 16:10:57 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &param)
{
	this->fire = &param;
}

HumanB::HumanB(std::string name)
{
	this->fire = NULL;
	this->name = name;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with thier " << fire->getType() << '\n';
}

HumanB::~HumanB()
{
	std::cout << "\n$$$$$ "<< this->name << " fighter is destroyed" << " $$$$$" << '\n';
}