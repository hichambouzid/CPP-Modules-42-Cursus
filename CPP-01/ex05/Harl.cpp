/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:17:10 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/06 17:12:26 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


// Harl::Harl()
// {
// 	std::cout << "A new object was created\n";
// }

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << " cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;

}

void Harl::warning( void )
{
	std::cout << " think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain( std::string level )
{
	std::string str[4];
	
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	void (Harl::*ptrfunction[4])() = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (!str[i].compare(level))
		{
			(this->*(ptrfunction[i]))();
			return;
		}
	}
	std::cout << "Invalide Title level" << std::endl;
}

