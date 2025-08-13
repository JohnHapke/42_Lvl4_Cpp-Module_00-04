/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:00 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/13 14:47:45 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cctype>
# include <string>
# include <iostream>

class	Weapon {

public:
	const std::string&	getType( void ) const;
	void		setType( std::string input);

	Weapon( std::string input );
	~Weapon( void );
private:
	std::string	_type;
};

#endif