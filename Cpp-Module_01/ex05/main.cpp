/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:31:31 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/27 11:11:22 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;
	if (argc < 2)
		std::cerr << "not enough arguments" << std::endl;
	for (int i = 1; i < argc; i++) {
		harl.complain(argv[i]);
	}
	return (0);
}
