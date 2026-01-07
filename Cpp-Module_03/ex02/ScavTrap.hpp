/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:10:52 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/07 13:37:49 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(const std::string Input);
	ScavTrap(const ScavTrap& arg);
	ScavTrap& operator=(const ScavTrap& arg);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};

#endif
