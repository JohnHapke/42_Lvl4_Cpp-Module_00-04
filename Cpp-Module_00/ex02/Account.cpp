/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:10:53 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/18 16:16:18 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) 
	: _accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits (0),
	_nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account( void ) {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	now = time(NULL);
	tm			*time;

	time = localtime(&now);
	std::cout << "[" << time->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << time->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_sec << "]";
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:"<< _nbAccounts << ";total:"
	<< _totalAmount << ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int	p_amount;

	if (_amount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	p_amount = _amount;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_nbWithdrawals += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const {
	return (_amount);
}
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
