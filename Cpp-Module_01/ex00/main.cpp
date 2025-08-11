/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:30:51 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 11:56:18 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

int	main( void ) {
	
	Zombie	firstZombie;
	Zombie	*zombie;
	
	firstZombie.setName( "Foo" );
	firstZombie.anounce();
	zombie = newZombie( "new" );
	zombie->anounce();
	randomChump( "chump" );
	delete (zombie);
	return (0);
}
