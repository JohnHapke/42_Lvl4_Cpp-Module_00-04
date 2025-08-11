/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 09:49:36 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/11 11:57:22 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cctype>
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
