/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:59:32 by jhapke            #+#    #+#             */
/*   Updated: 2025/08/04 15:40:43 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

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