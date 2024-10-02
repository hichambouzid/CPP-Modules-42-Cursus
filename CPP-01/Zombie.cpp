/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:55:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 01:11:00 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce (void)
{
	std::cout <<  name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
	// this->name = name;
	std::cout << "The Zombie name: was created\n";
}

Zombie::~Zombie()
{
	std::cout << "The zombie named: " << name << "was deleted\n";
}