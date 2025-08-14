/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:31:17 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:59:08 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void ) {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
