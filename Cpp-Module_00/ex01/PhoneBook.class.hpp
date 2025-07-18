/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:59:32 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/18 15:43:36 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "header.hpp"
# include "Contact.class.hpp"

class PhoneBook {

public:
	PhoneBook( void );
	void	ft_add( void );
	void	ft_search( void );

private:
	Contact	_contacts[8];
	int		_contact_count;
	int		_current_index;
};

#endif