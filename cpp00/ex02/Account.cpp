/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:22:59 by anclarma          #+#    #+#             */
/*   Updated: 2021/10/30 17:38:13 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
	return ;
}

Account::Account(int initial_deposit) :
	_accountIndex(Account::_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount - deposit
		<< ";deposit:" <<  deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	std::time_t time_now = std::time(nullptr);
	std::cout << "["
		<< std::put_time(std::localtime(&time_now), "%Y%m%d_%OH%OM%OS")
		<< "] ";
}

int Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
