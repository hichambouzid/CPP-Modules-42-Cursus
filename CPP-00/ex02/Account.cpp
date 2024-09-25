/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:37:05 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/25 17:24:52 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

void add_zero(int number)
{
	if (number < 10)
		std::cout << 0 << number;
	else
		std::cout << number;
}

void	Account::_displayTimestamp( void )
{
	struct tm zone_time;
	time_t timestamp;
	time(&timestamp);
	zone_time = *localtime(&timestamp);
	std::cout << ctime(&timestamp);
	std::cout << "\n" << '[' << zone_time.tm_year + 1900;
	add_zero(zone_time.tm_mon + 1);
	add_zero(zone_time.tm_mday);
	std::cout << '_';
	add_zero(zone_time.tm_hour);
	add_zero(zone_time.tm_min);
	add_zero(zone_time.tm_sec);
	std::cout << ']';
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index :" << _nbAccounts++ << ';' << "amount:" << initial_deposit << "created\n";
	_totalAmount += initial_deposit;
	
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << _nbAccounts << "total:" << _totalAmount << "diposits:" << _totalAmount
	<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	std::cout << "hello world\n";
}

int	  Account::getNbAccounts( void )
{
	
}