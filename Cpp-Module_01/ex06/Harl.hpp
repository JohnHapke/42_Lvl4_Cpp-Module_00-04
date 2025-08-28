/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:43:10 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/28 08:48:16 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class	Harl {
public:
	void	complain(std::string level);

private:
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
