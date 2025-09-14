/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:56:57 by johnhapke         #+#    #+#             */
/*   Updated: 2025/09/14 10:42:51 by johnhapke        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;

	Fixed b( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << ">: " << (a > b) << std::endl;
	std::cout << "<: " << (a < b) << std::endl;
	std::cout << ">=: " << (a >= b) << std::endl;
	std::cout << "<=: " << (a <= b) << std::endl;
	std::cout << "==: " << (a == b) << std::endl;
	std::cout << "!=: " << (a != b) << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "a: " << a << " b: " << b << " c: " << c <<" d: " << d << " c: " << e << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( ++a, --b ) << std::endl;
	std::cout << " b: " << b << std::endl;

	return 0;
}