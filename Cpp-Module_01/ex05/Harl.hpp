/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:25:00 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/27 11:10:39 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>
#include <cstdio>

class	Harl {
public:
	void	complain(std::string level);

private:
	void (Harl::*ptrFct[4])(void);
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
