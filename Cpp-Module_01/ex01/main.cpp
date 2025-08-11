/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:31:00 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 16:19:02 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void ) {
	
	Zombie *zombie;
	int		n = 10;

	zombie = zombieHorde(n, "test");
	delete[] zombie;
	return (0);
}