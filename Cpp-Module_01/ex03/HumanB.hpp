/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:52:00 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:43:19 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <cctype>
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB {

public:
	void	attack( void ) const;
	void	setWeapon( Weapon& weapon );

	HumanB( std::string name );

private:
	Weapon*	_weapon;
	std::string	_name;
};

#endif