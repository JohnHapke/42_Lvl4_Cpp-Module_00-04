/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:10 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/13 14:48:09 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType( void ) const {

	return (_type);
}

void	Weapon::setType( std::string input ) {

	_type = input;
}

Weapon::Weapon( std::string input ) {

	setType(input);
}
