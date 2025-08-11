/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:45:37 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 12:03:20 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {

	Zombie	*zombie = new Zombie();
	
	zombie->setName( name );
	return ( zombie );
}
