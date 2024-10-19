/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:50:18 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/19 17:41:39 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "Default constructor FragTrap called\n";
	this->Name = ClapTrap::Name;
	this->Hit_Points = 100;	
	this->Enrgy_Points = 100;	
	this->Attak_Damage = 30;	
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap named: "<< name
	<< " was created with Hit_point: 100 & Energy_Point: 100 & Attack_damage: 30\n";
	this->Name = name;
	this->Hit_Points = 100;	
	this->Enrgy_Points = 100;	
	this->Attak_Damage = 30;	
}

FragTrap::FragTrap(const FragTrap &copy_frag) : ClapTrap(copy_frag)
{
	std::cout << "Copy constructor of FragTrap was called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "======== Just do it. ==========\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap under name: " << this->Name << " was Destroyed Enrgy: " << this->Enrgy_Points << " Hit point: "
		<< this->Hit_Points << " attack damage: " << this->Attak_Damage << '\n';
}