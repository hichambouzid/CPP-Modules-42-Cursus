/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:14:04 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/02 01:28:16 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// int i = 0;
	Zombie *zombozo = Zombie::zombieHorde(4, "tetouuani massoni");
	// for (int i = 0; i < 4 ; i++)
		delete []zombozo;
}