/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 07:28:21 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/09 16:08:51 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
	std::cout << "default constructor called -> 0 assigned to x & y" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y) {
	std::cout << "parameter constructor called"<< std::endl;
}

Point::Point( const Point& arg): _x(arg._x), _y(arg._y) {
	std::cout << "copy construtor called" << std::endl;
}

Point& Point::operator=(const Point& arg) {
	if (this == &arg)
	{
		std::cout << "equal arguments -> nothing to do" << std::endl;
		return *this;
	}
	std::cout << "can not assign to const Fixed" << std::endl;
	return *this;
}

	Point::~Point() {
		std::cout << "destructor called" << std::endl;
	}
	
	Fixed		Point::getX() const {
		return _x;
	}
	
	Fixed		Point::getY() const {
		return _y;
	}
	