/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:10:53 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/14 11:43:10 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <cctype>
#include <string>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	tm	time;

	std::cout << "[" << time.tm_year << time.tm_mon << time.tm_mday << "_" << time.tm_hour << time.tm_min << time.tm_sec << "]";
}
/*
static int	Account::getNbAccounts( void )
{
	
}
static int	Account::Account( void );
{
	
}

static int	Account::getNbDeposits( void )
{
	
}

static int	Account::getNbWithdrawals( void )
{
	
}*/
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:"<< _nbAccounts << ";total:"
	<< _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

/*void	Account::makeDeposit( int deposit )
{
	
}
bool	Account::makeWithdrawal( int withdrawal )
{
	
}
int		Account::checkAmount( void ) const
{
	
}
void	Account::displayStatus( void ) const
{
	
}*/