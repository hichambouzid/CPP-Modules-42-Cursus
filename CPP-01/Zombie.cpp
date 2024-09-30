/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:51:48 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/30 11:57:48 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout <<  name << " : BraiiiiiiinnnzzzZ...\n";
	if (!name.compare("Foo"))
		std::cout << name  << " : BraiiiiiiinnnzzzZ...\n"
}