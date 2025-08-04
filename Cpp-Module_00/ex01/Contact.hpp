/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:02:26 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/04 15:40:37 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneBook.hpp"

class Contact {

public:
	bool	ft_set_first_name(const std::string& input);
	std::string	ft_get_first_name( void ) const;
	bool	ft_set_last_name(const std::string& input);
	std::string	ft_get_last_name( void ) const;
	bool	ft_set_nickname(const std::string& input);
	std::string	ft_get_nickname( void ) const;
	bool	ft_set_phone_number(const std::string& input);
	std::string	ft_get_phone_number( void ) const;
	bool	ft_set_darkest_secret(const std::string& input);
	std::string	ft_get_darkest_secret( void ) const;

private:
	std::string _first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
