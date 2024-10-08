/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:20:15 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/04 16:11:34 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &param) : fire(param)
{
		this->name= name;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with thier " << fire.getType() << '\n';
}

HumanA::~HumanA()
{
	std::cout << "\n$$$$$ "<< this->name << " fieghter is destroyed" << " $$$$$\n\n";
}