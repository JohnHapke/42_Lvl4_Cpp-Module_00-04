/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:27:04 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 12:03:45 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cctype>
#include <iostream>

Zombie::Zombie( void ) {

	;
}

Zombie::~Zombie( void ) {

	std::cout << "Zombie: " << _name << " destroyed" << std::endl;
}

void	Zombie::anounce( void ) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void	Zombie::setName( std::string name ) {

	_name = name;
}
