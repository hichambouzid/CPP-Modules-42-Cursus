/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:16:15 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/18 17:15:40 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor ScavTrap called\n";
	this->Name = "Default_robot";
	this->Hit_Points = 100;
	this->Enrgy_Points = 50;
	this->Attak_Damage = 20;		
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " created\n";
	this->Hit_Points = 100;
	this->Enrgy_Points = 50;
	this->Attak_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy_scav) : ClapTrap(copy_scav)
{
	std::cout << "Copy constructor of ScavTrap called\n";
}

void  ScavTrap::attack(const std::string& target)
{
	if (!this->Hit_Points || !this->Enrgy_Points)
		std::cout << "There is no " << (this->Hit_Points == 0 ? "Hit point" : "Energy point") << '\n';
	else
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target <<
			", causing " << this->Attak_Damage << " points of damage!\n";
		this->Enrgy_Points -= 1;
		this->Attak_Damage += 1;
	}
	
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is : " << this->Name << " and now he is in gate keeper mode\n";
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " was Destroyed Enrgy: " << this->Enrgy_Points << " Hit point: "
		<< this->Hit_Points << " attack damage: " << this->Attak_Damage << '\n';
}
