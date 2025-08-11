/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:02:11 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 16:12:01 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie	*zombie = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
		zombie[i].anounce();
	}
	return (&zombie[0]);
}
