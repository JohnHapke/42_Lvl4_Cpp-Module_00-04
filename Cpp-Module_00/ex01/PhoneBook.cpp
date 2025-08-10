/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:48:15 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/10 15:07:46 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook( void ) {

	_contact_count = 0;
	_current_index = 0;
};

void	PhoneBook::ft_add( void ) {

	std::string	input;

	if (_current_index >= 8)
		_current_index = 0;
	if (_contact_count == 8)
		std::cout << "contact number " << _current_index << " will be overwritten" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		std::cout << "first name: \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (_contacts[_current_index].ft_set_first_name(input) == true)
			break ;
		std::cout << "input invalid; please retry\n";
	}
	while (1)
	{
		std::cout << "last name: \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (_contacts[_current_index].ft_set_last_name(input) == true)
			break ;
		std::cout << "input invalid; please retry\n";
	}
	while (1)
	{
		std::cout << "nickname: \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (_contacts[_current_index].ft_set_nickname(input) == true)
			break ;
		std::cout << "input invalid; please retry\n";
	}
	while (1)
	{
		std::cout << "phone number: \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (_contacts[_current_index].ft_set_phone_number(input) == true)
			break ;
		std::cout << "input invalid; please retry\n";
	}
	while (1)
	{
		std::cout << "darkest secret: \n";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (_contacts[_current_index].ft_set_darkest_secret(input) == true)
			break ;
		std::cout << "input invalid; please retry\n";
	}
	std::cout << "new contact added to the phonebook" << std::endl;
	if (_contact_count < 8)
		_contact_count++;
	_current_index++;
	return ;
}

void	PhoneBook::ft_search( void ) {

	std::string	display_text;
	int			index;

	if (_contact_count == 0)
	{
		std::cout << "Please, add a contact first" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	for (int i = 0; i < _contact_count; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		display_text = _contacts[i].ft_get_first_name();
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = _contacts[i].ft_get_last_name();
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = _contacts[i].ft_get_nickname();
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter valid index of contact to display: " << std::endl;
		std::cin >> index;
		if (std::cin.eof())
			exit(1);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		if (index >= 0 && index < _contact_count)
			break ;
	}	
	std::cout << "first name: " << _contacts[index].ft_get_first_name() << std::endl;
	std::cout << "last name: " << _contacts[index].ft_get_last_name() << std::endl;
	std::cout << "nickname: " << _contacts[index].ft_get_nickname() << std::endl;
	std::cout << "phone number: " << _contacts[index].ft_get_phone_number() << std::endl;
	std::cout << "darkest secret: " << _contacts[index].ft_get_darkest_secret() << std::endl;
	return ;
}
