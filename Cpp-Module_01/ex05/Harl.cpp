/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:24:49 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/27 11:20:44 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level) {
	void		(Harl::*ptrFct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (!level.compare(array[i]))
		{
			(this->*ptrFct[i])();
			return ;
		}
	}
	std::cerr << "argument not found" << std::endl;
}

void	Harl::debug() {
	std::cout << "debug" << std::endl;
}

void	Harl::info() {
	std::cout << "info" << std::endl;
}

void	Harl::warning() {
	std::cout << "warning" << std::endl;
}

void	Harl::error() {
	std::cout << "error" << std::endl;
}
