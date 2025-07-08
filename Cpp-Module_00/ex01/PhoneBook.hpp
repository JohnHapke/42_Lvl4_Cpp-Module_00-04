/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:59:32 by jhapke            #+#    #+#             */
/*   Updated: 2025/07/08 12:25:15 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
	Contact	contacts[8];
	int		contact_count;
	int		current_index;
	
	public:
	PhoneBook();
	void	ft_add();
	void	ft_search();
};

#endif