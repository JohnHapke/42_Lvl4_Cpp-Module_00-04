/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:48:15 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/18 16:05:08 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook( void ) {

	_contact_count = 0;
	_current_index = 0;
};

namespace {
	void	promptAndSet(InputType type, std::string msg, Contact& contacts) {
		std::string	input;
		bool		success;

		success = false;
		while (1)
		{
			std::cout << msg << std::endl;
			std::getline(std::cin, input);
			if (std::cin.eof())
				exit(1);
			switch(type)
			{
				case FIRST_NAME:
					success = contacts.setFirstName(input);
					break;
				case LAST_NAME:
					success = contacts.setLastName(input);
					break;
				case NICKNAME:
					success = contacts.setNickname(input);
					break;
				case PHONE_NUMBER:
					success = contacts.setPhoneNumber(input);
					break;
				case SECRET:
					success = contacts.setDarkestSecret(input);
					break;
			}
			if (success == true)
				break;
			std::cout << "input invalid; please retry\n";
		}
	}

	void	controlLength(InputType type, Contact& contact) {
		std::string	displayText;

		switch(type)
		{
			case FIRST_NAME:
				displayText = contact.getFirstName();
				break;
			case LAST_NAME:
				displayText = contact.getLastName();
				break;
			case NICKNAME:
				displayText = contact.getNickname();
				break;
			case PHONE_NUMBER:
			case SECRET:
				break;
		}
		if (displayText.length() > 10)
			displayText = displayText.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << displayText << "|";
	}
}

void	PhoneBook::addContact() {

	std::string	input;

	if (_current_index >= 8)
		_current_index = 0;
	if (_contact_count == 8)
		std::cout << "contact number " << _current_index << " will be overwritten" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	promptAndSet(FIRST_NAME, "first name: ", _contacts[_current_index]);
	promptAndSet(LAST_NAME, "last name: ", _contacts[_current_index]);
	promptAndSet(NICKNAME, "nickname: ", _contacts[_current_index]);
	promptAndSet(PHONE_NUMBER, "phone number: ", _contacts[_current_index]);
	promptAndSet(SECRET, "darkest secret: ", _contacts[_current_index]);
	std::cout << "new contact added to the phonebook" << std::endl;
	if (_contact_count < 8)
		_contact_count++;
	_current_index++;
	return ;
}

void	PhoneBook::searchContact() {

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
		controlLength(FIRST_NAME, _contacts[i]);
		controlLength(LAST_NAME, _contacts[i]);
		controlLength(NICKNAME, _contacts[i]);
		std::cout << std::endl;
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
	std::cout << "first name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "last name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "phone number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
	return ;
}
