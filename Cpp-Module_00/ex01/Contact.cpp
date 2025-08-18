/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:50:54 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/18 16:02:58 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	Contact::setFirstName(const std::string& input) {
	if (input.empty())
		return (false);
	_first_name = input;
	return (true);
}

std::string	Contact::getFirstName() const {
	return (_first_name);
}

bool	Contact::setLastName(const std::string& input) {
	if (input.empty())
		return (false);
	_last_name = input;
	return (true);
}
std::string	Contact::getLastName() const {
	return (_last_name);
}

bool	Contact::setNickname(const std::string& input) {
	if (input.empty())
		return (false);
	_nickname = input;
	return (true);
}

std::string	Contact::getNickname() const {
	return (_nickname);
}

bool	Contact::setPhoneNumber(const std::string& input) {
	if (input.empty())
		return (false);
	_phone_number = input;
	return (true);
}

std::string	Contact::getPhoneNumber() const {
	return (_phone_number);
}

bool	Contact::setDarkestSecret(const std::string& input) {
	if (input.empty())
		return (false);
	_darkest_secret = input;
	return (true);
}

std::string	Contact::getDarkestSecret() const {
	return (_darkest_secret);
}
