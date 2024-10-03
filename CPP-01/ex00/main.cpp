/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:47:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/03 17:03:28 by hibouzid         ###   ########.fr       */
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
