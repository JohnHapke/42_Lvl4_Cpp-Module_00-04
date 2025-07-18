/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:48:15 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/18 15:43:24 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {

	_contact_count = 0;
	_current_index = 0;
};

void	PhoneBook::ft_add( void ) {

	if (_current_index >= 8)
		_current_index = 0;
	if (_contact_count == 8)
		std::cout << "contact number " << _current_index << " will be overwritten" << std::endl;
	std::cout << "first name: \n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, _contacts[_current_index].first_name);
	std::cout << "last name: \n";
	std::getline(std::cin, _contacts[_current_index].last_name);
	std::cout << "nickname: \n";
	std::getline(std::cin, _contacts[_current_index].nickname);
	std::cout << "phone number: \n";
	std::getline(std::cin, _contacts[_current_index].phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> _contacts[_current_index].darkest_secret;
	std::cout << "new contact added to the phonebook" << std::endl;
	if (_contact_count < 8)
		_contact_count++;
	_current_index++;
	return ;
}

void	PhoneBook::ft_search( void ) {

	std::string	display_text;
	int			index;

	if (_contacts[0].first_name.empty())
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
		display_text = _contacts[i].first_name;
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = _contacts[i].last_name;
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = _contacts[i].nickname;
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter valid index of contact to display: " << std::endl;
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		if (index >= 0 && index < _contact_count)
			break ;
	}	
	std::cout << "first name: " << _contacts[index].first_name << std::endl;
	std::cout << "last name: " << _contacts[index].last_name << std::endl;
	std::cout << "nickname: " << _contacts[index].nickname << std::endl;
	std::cout << "phone number: " << _contacts[index].phone_number << std::endl;
	std::cout << "darkest secret: " << _contacts[index].darkest_secret << std::endl;
	return ;
}
