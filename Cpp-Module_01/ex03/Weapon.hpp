/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:51:00 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/14 16:47:19 by johnhapke        ###   ########.fr       */
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
	void		setType( const std::string& input);

	Weapon( const std::string& input );

private:
	std::string	_type;
};

#endif