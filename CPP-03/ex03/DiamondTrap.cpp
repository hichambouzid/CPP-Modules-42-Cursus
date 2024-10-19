/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:46:21 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/19 18:08:12 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Random_clap_name")
{
	std::cout << "Default Constructor of DiamondTrap class called\n";
	this->Name = "Random";
	this->Attak_Damage = 30; 
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "constructor DiamondTrap called\n";
	this->Name = name;
	this->Attak_Damage = 30;
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI DiamondTrap: " << this->Name << " ,ClapTrap: " << ClapTrap::Name << " & Hit point: " << this->Hit_Points << " Energy_point: " << this->Enrgy_Points
	<< " attack_damage: " << this->Attak_Damage << '\n';
	// this->attack("attack_Looo");
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DaimondTrap : " <<  this->Name << " Was destroyed\n";
}