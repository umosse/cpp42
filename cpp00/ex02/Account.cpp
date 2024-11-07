/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:17:07 by umosse            #+#    #+#             */
/*   Updated: 2024/11/07 13:32:47 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";deposit:" << withdrawal << ";amount:" << _amount << ";nb_deposits:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}

}

int	Account::checkAmount()const
{
	return (0);
}

void	Account::displayStatus()const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t	time = std::time({});
	char	timestring[42];
	std::strftime(timestring, 42, "[%Y%m%d_%H%M%S]", std::localtime(&time));
	std::cout << timestring;
}
