/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:57 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/13 14:53:05 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon( Weapon weapon ) {

	_weapon = weapon.getType();
}

void	HumanB::attack( void ) {

	std::cout << _name << " attacks with their " << _weapon << std::endl;
}

HumanB::HumanB( void ) {
	;
}