/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 09:47:32 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/10 08:58:48 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed() : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& arg) {
	std::cout << "Copy constructor called" << std::endl;
	operator=(arg);
}

Fixed::Fixed(const int ival) {
	std::cout << "Int constructor called" << std::endl;
	_n = ival * (1 << _bits);
}

Fixed::Fixed(const float fval) {
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(fval * (1 << _bits));
}

Fixed&	Fixed::operator=(const Fixed& arg) {
	std::cout << "Copy assignment operator called" << std::endl;
	_n = arg._n;
	//getRawBits();
	return *this;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _n;
}

void	Fixed::setRawBits(int const raw) {
	_n = raw;
}

Fixed::~Fixed() {
	std::cout << "destructor called" << std::endl;
}

float	Fixed::toFloat() const {
	float value = _n / float(1 << _bits);
	 return value;
}

int	Fixed::toInt() const {
	return roundf(_n / (1 << _bits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& arg) {
	os << (float)arg.toFloat();
	return os;
}
