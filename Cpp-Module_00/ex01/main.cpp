/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:58:39 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/18 16:05:36 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main( void ) {

	PhoneBook	my_phonebook;
	std::string	user_input;

	while (1)
	{
		std::cout << "Please, type in 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		std::cin >> user_input;
		if (std::cin.eof())
			exit(1);
		if (user_input== "ADD")
			my_phonebook.addContact();
		if (user_input == "SEARCH")
			my_phonebook.searchContact();
		if (user_input == "EXIT")
			break ;
	}
	return (0);
}
