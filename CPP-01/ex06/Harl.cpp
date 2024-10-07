/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:08:55 by hibouzid          #+#    #+#             */
/*   Updated: 2024/10/07 11:30:32 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void )
{
	std::cout << " cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;

}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}


void Harl::complain( std::string level )
{
	std::string str[4];
	int i;
	
	i = 0;
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	void (Harl::*ptrfunction[4])() = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error};
	for ( ; i < 4; i++)
	{
		if (!str[i].compare(level))
			break;
	}
	
	switch (i)
	{
		case 0:
			std::cout << "[ " << str[i] << " ]" << '\n';
			(this->*(ptrfunction[i++]))();
		case 1:
			std::cout << "[ " << str[i] << " ]" << '\n';
			(this->*(ptrfunction[i++]))();
		case 2:
			std::cout << "[ " << str[i] << " ]" << '\n';
			(this->*(ptrfunction[i++]))();
		case 3:
			std::cout << "[ " << str[i] << " ]" << '\n';
			(this->*(ptrfunction[i++]))();
		default:
			return ;

	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
