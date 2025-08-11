/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:47:03 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 16:12:40 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cctype>
# include <iostream>
# include <string>

class Zombie {

public:
	void	anounce( void );
	void	setName( std::string name );
	
	Zombie( void );
	~Zombie( void );

private:
	std::string	_name;

};

#endif
