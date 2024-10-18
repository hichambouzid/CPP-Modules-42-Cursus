/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:52:23 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/18 17:15:08 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ScavTrap1("Tester");
	ScavTrap1.attack("Devloper");
	ScavTrap1.takeDamage(2);
	ScavTrap1.guardGate();
}