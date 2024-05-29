/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:11:57 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/28 09:22:12 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default constructor
Fixed::Fixed(void) : _valeur(0){
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	this->_valeur = other.getRawBits();
}

// Int constructor
Fixed::Fixed(const int i){
	std::cout << "Integer constructor called" << std::endl;
	this->_valeur = i << this->_nbBitsFract;
}

// Float constructor
Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	//this->_valeur = static_cast<int>(f * (1 << this->_nbBitsFract)); //diff float for c
	this->_valeur = static_cast<int>(roundf(f * pow(2, this->_nbBitsFract)));

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
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _valeur;
}

void Fixed::setRawBits(int const raw) {
	_valeur = raw;
}

float Fixed::toFloat(void) const {
        return static_cast<float>(this->_valeur) / static_cast<float>(1 << this->_nbBitsFract);
}
int Fixed::toInt(void) const {
        return this->_valeur >> this->_nbBitsFract;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fi)
{
    os << fi.toFloat();
    return os;
}
