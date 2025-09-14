/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:58:09 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/13 14:18:21 by johnhapke        ###   ########.fr       */
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
	bool	operator>(const Fixed& arg) const;
	bool	operator<(const Fixed& arg) const;
	bool	operator>=(const Fixed& arg) const;
	bool	operator<=(const Fixed& arg) const;
	bool	operator==(const Fixed& arg) const;
	bool	operator!=(const Fixed& arg) const;
	Fixed	operator+(const Fixed& arg) const;
	Fixed	operator-(const Fixed& arg) const;
	Fixed	operator*(const Fixed& arg) const;
	Fixed	operator/(const Fixed& arg) const;
	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();

	static Fixed&		min(Fixed& fp1, Fixed& fp2);
	static const Fixed&	min(const Fixed& fp1, const Fixed& fp2);
	static Fixed&		max(Fixed& fp1, Fixed& fp2);
	static const Fixed&	max(const Fixed& fp1, const Fixed& fp2);

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
