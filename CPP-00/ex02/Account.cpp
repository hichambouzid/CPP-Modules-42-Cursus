/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibouzid <hibouzid@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:37:05 by hibouzid          #+#    #+#             */
/*   Updated: 2024/09/27 09:34:58 by hibouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void add_zero(int number)
{
	if (number < 10)
		std::cout << 0 << number;
	else
		std::cout << number;
}

int	  Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

void	Account::_displayTimestamp( void )
{
	struct tm zone_time;
	time_t timestamp;
	time(&timestamp);
	zone_time = *localtime(&timestamp);
	// std::cout << ctime(&timestamp);
	std::cout  << '[' << zone_time.tm_year + 1900;
	add_zero(zone_time.tm_mon + 1);
	add_zero(zone_time.tm_mday);
	std::cout << '_';
	add_zero(zone_time.tm_hour);
	add_zero(zone_time.tm_min);
	add_zero(zone_time.tm_sec);
	std::cout << "] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = getNbAccounts();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	std::cout << "index:" << getNbAccounts() << ";amount:" << initial_deposit << ";created\n";
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << '\n';
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" <<
		_amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << ++_nbDeposits << '\n';
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	 
}

int		Account::checkAmount( void ) const
{
	if (_amount >= 0)
		return (1);
	return (0);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if ( _amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused\n";
		return (false);
	}	
	// else
	// {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << ++_nbWithdrawals << '\n';
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	// }
	return (true);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}





int	Account::getTotalAmount( void )
{
	return (_totalAmount);	
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex << ";amount:" << _amount << ";closed\n"; 
}