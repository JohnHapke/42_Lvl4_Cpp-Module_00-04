/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:58:02 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/09 14:06:27 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

// constructors
Fixed::Fixed() : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& arg): _n(arg._n) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int ival) {
	std::cout << "Int constructor called" << std::endl;
	_n = ival * (1 << _bits);
}

Fixed::Fixed(const float fval) {
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(fval * (1 << _bits));
}

// operator overload

Fixed&	Fixed::operator=(const Fixed& arg) {
	if (this == &arg)
	{
		std::cout << "Copy assignment operator called with itself" << std::endl;
		return *this;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	_n = arg._n;
	//getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& arg) {
	os << (float)arg.toFloat();
	return os;
}

bool	Fixed::operator>(const Fixed& arg) const {
	if ((this->_n) > arg._n)
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed& arg) const {
	if ((this->_n) < arg._n)
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed& arg) const {
	if ((this->_n) >= arg._n)
		return true;
	else
		return false;
 }
 
bool	Fixed::operator<=(const Fixed& arg) const {
	if ((this->_n) <= arg._n)
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed& arg) const {
	if ((this->_n) == arg._n)
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed& arg) const {
	if ((this->_n) != arg._n)
		return true;
	else
		return false;
}

Fixed	Fixed::operator+(const Fixed& arg) const {
	Fixed	temp;

	temp._n = this->_n + arg._n;
	return temp;
}

Fixed	Fixed::operator-(const Fixed& arg) const {
	Fixed	temp;

	temp._n = this->_n - arg._n;
	return temp;
}

Fixed	Fixed::operator*(const Fixed& arg) const {
	Fixed	temp;

	temp._n = (this->_n * arg._n) / (1 << _bits);
	return temp;
}

Fixed	Fixed::operator/(const Fixed& arg) const {
	Fixed	temp;

	if (arg._n == 0)
		temp._n = 0;
	temp._n = ((float)this->_n / (float)arg._n) * (1 << _bits);
	return temp;
}

Fixed	Fixed::operator++(int) {
	Fixed temp;
	
	temp._n = this->_n;
	this->_n += 1;
	return temp;
}

Fixed&	Fixed::operator++() {
	this->_n += 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp;
	
	temp._n = this->_n;
	this->_n -= 1;
	return temp;
}

Fixed&	Fixed::operator--() {
	this->_n -= 1;
	return *this;
}

Fixed&	Fixed::min(Fixed& fp1, Fixed& fp2) {
	if (fp1.getRawBits() < fp2.getRawBits())
		return (fp1);
	else
		return (fp2);
}

const Fixed&	Fixed::min(const Fixed& fp1, const Fixed& fp2) {
	if (fp1.getRawBits() < fp2.getRawBits())
		return (fp1);
	else
		return (fp2);
}

Fixed&	Fixed::max(Fixed& fp1, Fixed& fp2) {
	if (fp1.getRawBits() < fp2.getRawBits())
		return (fp2);
	else
		return (fp1);
}

const Fixed&	Fixed::max(const Fixed& fp1, const Fixed& fp2) {
	if (fp1.getRawBits() < fp2.getRawBits())
		return (fp2);
	else
		return (fp1);
}

// further member fct

int		Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
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
