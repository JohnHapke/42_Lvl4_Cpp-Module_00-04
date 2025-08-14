/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:57 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:54:28 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon( Weapon& weapon ) {

	_weapon = &weapon;
}

void	HumanB::attack( void ) const {

	if (_weapon == NULL || (_weapon->getType().empty()))
		std::cout << _name << " has no weapon" << std::endl;
	else
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB( std::string name ) : _weapon(NULL) {

	_name = name;
}