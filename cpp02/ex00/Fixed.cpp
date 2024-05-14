/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:11:57 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/13 13:12:45 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _valeur(0){
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	this->_valeur = other.getRawBits();

}
// Assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_valeur = other.getRawBits();
	return *this;
}

// Destructor
Fixed::~Fixed(void){
	std::cout << "Default destructor called" << std::endl;
}

// Public member functions
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _valeur;
}

void Fixed::setRawBits(int const raw) {
	_valeur = raw;
}
