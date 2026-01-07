/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:10:27 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/06 17:06:27 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Input): ClapTrap(Input) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " constructed & ready" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << _name << " destructed" << std::endl;
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
