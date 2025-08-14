/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:33 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:43:37 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {

	_name = name;
}

void	HumanA::attack( void ) const {

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}