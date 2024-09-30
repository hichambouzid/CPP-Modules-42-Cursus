/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:51:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/30 16:32:03 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name_gived)
{
	this->name = name_gived;
	std::cout << "The zombie named " << this->name << " was created\n";
}

Zombie::~Zombie()
{
	std::cout << "the zombie named " << name << " was deleted\n";
}

void Zombie::announce(void)
{
	std::cout <<  name << " : BraiiiiiiinnnzzzZ...\n";
}
