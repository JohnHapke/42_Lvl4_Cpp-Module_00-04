/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:08:24 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/07 13:37:37 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const std::string Input): ClapTrap(Input) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " parameter constructed called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& arg): ClapTrap(arg) {
	std::cout << _name << " copy constructor called (FragTrap)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& arg) {
	if (this == &arg)
	{
		std::cout << this->_name << " assignemnt constructor: same variable -> nothing to do (FragTrap)" << std::endl;
		return *this;
	}
	ClapTrap::operator=(arg);
	std::cout << this->_name << " assignment constructor called and " << this->_name << " assigned (FragTrap)" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << _name << " destructed accordingly" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "high five request?" << " -> positive" << std::endl;
}
