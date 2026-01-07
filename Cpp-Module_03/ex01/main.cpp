/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:37:20 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/07 12:17:52 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ClapTrap clap("ClapTrap");
	ScavTrap scav("ScavTrap");
	ScavTrap scavDefault;
	ScavTrap scavCopy(scav);
	
	scavDefault = scavCopy;
	std::cout << "TEST ClapTrap: attack, damage, repairs" << std::endl;
	clap.attack("third");
	clap.takeDamage(5);
	clap.beRepaired(5);

	std::cout << "TEST ScavTrap: attack, damage, repairs" << std::endl;
	scav.attack("third");
	scav.takeDamage(5);
	scav.beRepaired(5);

	std::cout << "TEST Scav: running out of energy && trying to act wth no energy" << std::endl;
	for (int i = 48; i >= 0; i--)
		scav.beRepaired(10);

	std::cout << "TEST Scav: running out of hit points && trying to act when dead" << std::endl;
	scav.guardGate();
	scav.takeDamage(580);
	scav.beRepaired(100);
	return (0);
}
