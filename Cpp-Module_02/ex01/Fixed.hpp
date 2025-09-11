/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 08:00:01 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/09 11:27:46 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed& arg);
	Fixed(const int ival);
	Fixed(const float fval);
	Fixed&	operator=(const Fixed& arg);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	~Fixed();
private:
	int					_n;
	static const int	_bits;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& arg);

#endif
