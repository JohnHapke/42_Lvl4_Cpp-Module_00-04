/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:33 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/13 11:57:21 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {

	_name = name;
	_weapon = weapon.getType();
}

void	HumanA::attack( void ) {

	std::cout << _name << " attacks with their " << _weapon << std::endl;
}