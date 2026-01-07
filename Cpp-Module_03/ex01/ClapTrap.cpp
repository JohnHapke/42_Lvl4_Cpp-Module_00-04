/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:37:23 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/07 13:37:02 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "default constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string Input): _name(Input), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "constructor with specific name input called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& arg): _name(arg._name), _hitPoints(arg._hitPoints), _energyPoints(arg._energyPoints), _attackDamage(arg._attackDamage) {
	std::cout << _name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& arg) {
	if (this == &arg)
	{
		std::cout << "assignment operator executed for " << _name << " but same variable used -> nothing to do" << std::endl;
		return *this;
	}
	this->_name = arg._name;
	this->_hitPoints = arg._hitPoints;
	this->_energyPoints = arg._energyPoints;
	this->_attackDamage = arg._attackDamage;
	std::cout << "assignment operator executed for " << _name << std::endl;
	return *this;
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
		_hitPoints += amount;
		std::cout << _name << " repairs herself and gains " << amount << " hit point(s)" << std::endl;
		std::cout << _name << " has now " << _hitPoints << " hit points" << std::endl;
	}
	else
		std::cout << _name << " has no energy or hit points left" << std::endl;
}
