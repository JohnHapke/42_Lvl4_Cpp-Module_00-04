/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:10:27 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/07 13:37:15 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const std::string Input): ClapTrap(Input) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " parameter constructed called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& arg): ClapTrap(arg) {
	std::cout << _name << " copy constructor called (ScavTrap)" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& arg) {
	if (this == &arg)
	{
		std::cout << this->_name << " assignemnt constructor: same variable -> nothing to do (ScavTrap)" << std::endl;
		return *this;
	}
	ClapTrap::operator=(arg);
	std::cout << this->_name << " assignment constructor called and " << this->_name << " assigned (ScavTrap)" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << _name << " destructed (ScavTrap)" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << _name << " is now in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _name << " attacks " << target <<" and causes " << _attackDamage << " damage points" << std::endl;
	}
	else
		std::cout << _name << " has no energy or hit points left" << std::endl;
}
