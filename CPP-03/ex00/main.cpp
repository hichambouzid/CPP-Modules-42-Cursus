/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:52:23 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/18 17:13:41 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap robot_rr("Agent");
	robot_rr.attack("Manager");
	robot_rr.takeDamage(5);
	robot_rr.beRepaired(9);
}