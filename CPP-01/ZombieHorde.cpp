/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:02:11 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 01:30:28 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombie_band = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_band[i].name = name;
		zombie_band[i].announce();
	}
	return (zombie_band);
}