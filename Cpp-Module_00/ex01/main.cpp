/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:58:39 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/08 12:25:51 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	PhoneBook	my_phonebook;
	std::string	user_input;

	while (1)
	{
		std::cout << "Please, type in 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		std::cin >> user_input;
		if (user_input== "ADD")
			my_phonebook.ft_add();
		if (user_input == "SEARCH")
			my_phonebook.ft_search();
		if (user_input == "EXIT")
			break ;
	}
	return (0);
}
