/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:00:18 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/05 11:14:50 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& arg) {
	std::cout << "Copy constructor called" << std::endl;
	operator=(arg);
}

Fixed&	Fixed::operator=(const Fixed& arg) {
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