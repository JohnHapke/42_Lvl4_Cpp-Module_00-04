/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:59:32 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/18 16:04:48 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

enum InputType {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	SECRET
};
class PhoneBook {

public:
	PhoneBook();
	void	addContact();
	void	searchContact();

private:
	Contact	_contacts[8];
	int		_contact_count;
	int		_current_index;
};

#endif