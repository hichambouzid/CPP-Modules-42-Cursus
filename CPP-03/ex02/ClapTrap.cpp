/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:49:30 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/18 17:12:02 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->Enrgy_Points = 10;
	this->Hit_Points = 10;
	this->Attak_Damage = 0;
	std::cout << "Default constructor ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap " << Name << " created\n";
	this->Name = Name;
	this->Enrgy_Points = 10;
	this->Hit_Points = 10;
	this->Attak_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy_clap)
{
	std::cout << "Copy constructor ClapTrap called\n";
	*this = copy_clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy_clap)
{
	if (this != &copy_clap)
	{
		this->Name = copy_clap.Name;
		this->Hit_Points = copy_clap.Hit_Points;
		this->Enrgy_Points = copy_clap.Enrgy_Points;
		this->Attak_Damage = copy_clap.Attak_Damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->Hit_Points || !this->Enrgy_Points)
		std::cout << "There is no " << (this->Hit_Points == 0 ? "Hit point" : "Energy point") << '\n';
	else
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target <<
			", causing " << this->Attak_Damage << " points of damage!\n";
		this->Enrgy_Points -= 1;
		this->Attak_Damage += 1;
	}
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hit_Points -= amount;
	std::cout << "ClapTrap " << this->Name << " take amount of damage : " << amount << '\n';
	if (this->Hit_Points <= 0)
	{
		this->Hit_Points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " repaired istself with this amount : " << amount << '\n'; 
	this->Hit_Points += amount;
	this->Enrgy_Points -= 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}
