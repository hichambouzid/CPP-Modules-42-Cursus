/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:14:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 16:03:00 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombozo = zombieHorde(4, "C3 Zombieees");
	for (int i = 0; i < 4 ; i++)
		zombozo[i].announce();
	delete []zombozo;
}
