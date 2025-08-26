/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:48:13 by johnhapke         #+#    #+#             */
/*   Updated: 2025/08/26 15:57:21 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

void	compareAndAdapt(std::string& line, std::string s1, std::string s2) {
	size_t		pos;
	std::string	buffer;

	pos = 0;
	while ((pos = line.find(s1, pos + 1)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
}
