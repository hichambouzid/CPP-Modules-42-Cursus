/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:47:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 15:45:04 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name1 = "cha3kouk";
	std::string name2 = "cha3kouk loux";
	std::string name3 = "hetchmaaan";
	Zombie zombie1(name1);
	Zombie* zombie2 =  newZombie(name2);
	randomChump(name3);
	delete zombie2;
	// zombie1 = newZombie
}
