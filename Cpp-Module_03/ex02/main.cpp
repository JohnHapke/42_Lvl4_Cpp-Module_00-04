/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:37:20 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/06 17:22:14 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	ClapTrap clap("ClapTrap");
	ScavTrap scav("ScavTrap");
	FragTrap frag("FragTrap");
	
	std::cout << "TEST ClapTrap: attack, damage, repairs" << std::endl;
	clap.attack("third");
	clap.takeDamage(5);
	clap.beRepaired(5);

	std::cout << "TEST ScavTrap: attack, damage, repairs" << std::endl;
	scav.attack("fourth");
	scav.takeDamage(5);
	scav.beRepaired(5);

	std::cout << "TEST FragTrap: attack, damage, repairs" << std::endl;
	frag.attack("fifth");
	frag.takeDamage(5);
	frag.beRepaired(5);

	std::cout << "TEST Frag: running out of energy && trying to act wth no energy" << std::endl;
	for (int i = 98; i >= 0; i--)
		frag.beRepaired(10);

	std::cout << "TEST Frag: running out of hit points && trying to act when dead" << std::endl;
	frag.highFivesGuys();
	frag.takeDamage(1000);
	frag.beRepaired(100);
	return (0);
}
