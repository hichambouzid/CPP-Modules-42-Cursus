/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:12:28 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/04 12:20:00 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

const std::string &Weapon::getType()
{
	const std::string  &hold_name = this->type;
	return (hold_name);
}

void Weapon::setType(std::string new_one)
{
		this->type = new_one;
}
