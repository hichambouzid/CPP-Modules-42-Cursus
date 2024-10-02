/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:02:11 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 15:59:12 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::assign_name(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie_band = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie_band[i].assign_name(name);
	return (zombie_band);
}
