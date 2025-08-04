/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:50:54 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/04 15:40:27 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	Contact::ft_set_first_name(const std::string& input) {
	if (input.empty())
		return (false);
	_first_name = input;
	return (true);
}

std::string	Contact::ft_get_first_name( void ) const {
	return (_first_name);
}

bool	Contact::ft_set_last_name(const std::string& input) {
	if (input.empty())
		return (false);
	_last_name = input;
	return (true);
}
std::string	Contact::ft_get_last_name( void ) const {
	return (_last_name);
}

bool	Contact::ft_set_nickname(const std::string& input) {
	if (input.empty())
		return (false);
	_nickname = input;
	return (true);
}

std::string	Contact::ft_get_nickname( void ) const {
	return (_nickname);
}

bool	Contact::ft_set_phone_number(const std::string& input) {
	if (input.empty())
		return (false);
	_phone_number = input;
	return (true);
}

std::string	Contact::ft_get_phone_number( void ) const {
	return (_phone_number);
}

bool	Contact::ft_set_darkest_secret(const std::string& input) {
	if (input.empty())
		return (false);
	_darkest_secret = input;
	return (true);
}

std::string	Contact::ft_get_darkest_secret( void ) const {
	return (_darkest_secret);
}
