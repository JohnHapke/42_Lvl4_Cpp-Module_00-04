/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:31:37 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/28 09:27:36 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;
	if (argc < 2)
		std::cerr << "Harl did not say anything." << std::endl;
	for (int i = 1; i < argc; i++) {
		harl.complain(argv[i]);
	}
	return (0);
}
