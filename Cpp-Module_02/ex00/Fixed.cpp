/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:00:18 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/09 13:47:28 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& arg): _n(arg._n) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& arg) {
	if (this == &arg)
	{
		std::cout << "Copy assignment operator called with itself" << std::endl;
		return *this;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	_n = arg._n;
	getRawBits();
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
