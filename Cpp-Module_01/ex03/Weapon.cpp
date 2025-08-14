/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:10 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:47:29 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType( void ) const {

	return (_type);
}

void	Weapon::setType( const std::string& input ) {

	_type = input;
}

Weapon::Weapon( const std::string& input ) {

	setType(input);
}
