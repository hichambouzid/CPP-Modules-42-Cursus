/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:47:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/30 16:57:09 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name1 = "cha3kouk";
	std::string name2 = "cha3kouk loux";
	Zombie zombie1(name1);
	Zombie* zombie2 =  Zombie::newZombie(name2); 
	delete zombie2;
	// zombie1 = newZombie 		
}