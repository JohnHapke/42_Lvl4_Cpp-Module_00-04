/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:54:59 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 10:56:15 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

void	randomChump( std::string name ) {

	Zombie chumpZombie;
	
	chumpZombie.setName( name );
	chumpZombie.anounce();
}