/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:23 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/13 11:55:16 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <cctype>
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA {

public:
	void	attack( void );
	HumanA(std::string name, Weapon weapon);

public:
	std::string	_weapon;
	std::string	_name;
};

#endif