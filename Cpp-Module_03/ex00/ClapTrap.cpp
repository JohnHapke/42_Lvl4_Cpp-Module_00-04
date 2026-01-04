/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:37:23 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/04 14:25:41 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Input): _name(Input), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "constructor called for " << _name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor called for " <<_name << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _name << " attacks " << target <<" and causes " << _attackDamage << " damage points" << std::endl;
	}
	else
		std::cout << _name << " has no energy or hit points left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= (int)amount || _hitPoints == 0)
	{
		_hitPoints = 0;
		std::cout << _name << " has no hitPoints left" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << _name << " takes " << amount << " points of damage" << std::endl;
		std::cout << _name << " has " << _hitPoints << " hit points left" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _name << " repairs herself and gains " << amount << " hit point(s)" << std::endl;
		_hitPoints += amount;
	}
	else
		std::cout << _name << " has no energy or hit points left" << std::endl;
}
