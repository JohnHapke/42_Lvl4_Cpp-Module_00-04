/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:44:04 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/28 09:25:49 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level) {
	void		(Harl::*fctPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4) {
		if (level == array[i])
			break;
		i++;
	}
	switch (i) {
		case 0:
			(this->*fctPtr[i])();
			i++;
			/*fallthru */
		case 1:
			(this->*fctPtr[i])();
			i++;
			/*fallthru */
		case 2:
			(this->*fctPtr[i])();
			i++;
			/*fallthru */
		case 3:
			(this->*fctPtr[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug() {
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" << std::endl <<
	"ketchup burger. I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put" << std::endl <<
"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for" << std::endl <<
"years, whereas you started working here just last month." << std::endl;
}

void	Harl::error() {
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}