/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 07:28:29 by johnhapke         #+#    #+#             */
/*   Updated: 2026/01/09 16:09:51 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP
# include <cmath>
# include "Fixed.hpp"

class	Point {

public:
	Point();
	Point(const float x, const float y);
	Point( const Point& arg);
	Point& operator=(const Point& arg);
	~Point();
	Fixed	getX() const;
	Fixed	getY() const;

private:
	const Fixed _x;
	const Fixed _y;
};

#endif
