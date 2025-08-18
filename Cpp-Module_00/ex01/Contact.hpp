/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:02:26 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/18 16:02:38 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"

class Contact {

public:
	bool	setFirstName(const std::string& input);
	std::string	getFirstName() const;
	bool	setLastName(const std::string& input);
	std::string	getLastName() const;
	bool	setNickname(const std::string& input);
	std::string	getNickname() const;
	bool	setPhoneNumber(const std::string& input);
	std::string	getPhoneNumber() const;
	bool	setDarkestSecret(const std::string& input);
	std::string	getDarkestSecret() const;

private:
	std::string _first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
