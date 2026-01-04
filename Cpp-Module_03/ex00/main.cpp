/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:37:20 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/04 14:19:34 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap first("firstTrap");
	ClapTrap second("secondTrap");
	
	std::cout << "TEST: attack, damage, repairs" << std::endl;
	first.attack("third");
	first.takeDamage(5);
	first.beRepaired(5);

	std::cout << "TEST: running out of energy && trying to act wth no energy" << std::endl;
	for (int i = 10; i >= 0; i--)
		second.beRepaired(10);

	std::cout << "TEST: running out of hit points && trying to act when dead" << std::endl;
	first.takeDamage(10);
	first.beRepaired(10);
	return (0);
}
