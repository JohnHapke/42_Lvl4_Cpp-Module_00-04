/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:00:36 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/01 15:59:13 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

public:
	Fixed(int n);
	Fixed&	copyFixed(Fixed arg);
	Fixed	operator=(const Fixed& arg);
	int		getRawBits();
	void	setRawBits(int const raw);
	~Fixed();

private:
	int					_n;
	static const int	_bits = 8;
};

#endif
