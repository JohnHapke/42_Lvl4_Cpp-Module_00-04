/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:08:24 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/06 17:14:27 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string Input): ClapTrap(Input) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " constructed & ready" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << _name << " destructed accordingly" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "high five positivly requested" << std::endl;
}
