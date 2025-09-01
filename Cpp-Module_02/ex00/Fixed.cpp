/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:00:18 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/01 15:59:19 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int n) : _n(n) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed&	Fixed::copyFixed(Fixed arg) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(arg);
	
}

Fixed	Fixed::operator=(const Fixed& arg) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &arg) {
		_n = arg._n;
	}
	return *this;
}

int		Fixed::getRawBits() {
	return _bits;
}

void	Fixed::setRawBits(int const raw) {
	
}

Fixed::~Fixed() {
	
}