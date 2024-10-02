/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:55:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 15:58:57 by hibouzid         ###   ########.fr       */
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
	// std::cout << "The Zombie name: was created\n";
}

Zombie::~Zombie()
{
	std::cout << "The zombie named: " << name << "was deleted\n";
}
