/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:48:15 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/08 14:12:39 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	{
		contact_count = 0;
		current_index = 0;
	};

void	PhoneBook::ft_add()
{
	if (current_index >= 8)
		current_index = 0;
	if (contact_count == 8)
		std::cout << "contact number " << current_index << " will be overwritten" << std::endl;
	std::cout << "first name: \n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, contacts[current_index].first_name);
	std::cout << "last name: \n";
	std::getline(std::cin, contacts[current_index].last_name);
	std::cout << "nickname: \n";
	std::getline(std::cin, contacts[current_index].nickname);
	std::cout << "phone number: \n";
	std::getline(std::cin, contacts[current_index].phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> contacts[current_index].darkest_secret;
	std::cout << "new contact added to the phonebook" << std::endl;
	if (contact_count < 8)
		contact_count++;
	current_index++;
	return ;
}

void	PhoneBook::ft_search()
{
	std::string	display_text;
	int			index;

	if (contacts[0].first_name.empty())
	{
		std::cout << "Please, add a contact first" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		display_text = contacts[i].first_name;
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = contacts[i].last_name;
		if (display_text.length() > 10)
			display_text = display_text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << display_text << "|";
		display_text = contacts[i].nickname;
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
		if (index >= 0 && index < contact_count)
			break ;
	}	
	std::cout << "first name: " << contacts[index].first_name << std::endl;
	std::cout << "last name: " << contacts[index].last_name << std::endl;
	std::cout << "nickname: " << contacts[index].nickname << std::endl;
	std::cout << "phone number: " << contacts[index].phone_number << std::endl;
	std::cout << "darkest secret: " << contacts[index].darkest_secret << std::endl;
	return ;
}
