/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:57:09 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 16:01:32 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

	;
}

Zombie::~Zombie() {

	std::cout << "Zombie: " << _name << " destroyed" << std::endl;
}

void	Zombie::anounce( void) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void	Zombie::setName(std::string name) {

	_name = name;
}
