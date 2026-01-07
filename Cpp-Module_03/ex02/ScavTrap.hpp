/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:10:52 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/05 15:57:38 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HP
# define SCAVTRAP_HPP
# include <string.h>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string Input);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};

#endif
