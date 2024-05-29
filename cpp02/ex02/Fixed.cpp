/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:11:57 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/29 09:10:01 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default constructor
Fixed::Fixed(void) : _valeur(0){
//	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed& other){
//	std::cout << "Copy constructor called" << std::endl;
	this->_valeur = other.getRawBits();
}

// Int constructor
Fixed::Fixed(const int i){
//	std::cout << "Integer constructor called" << std::endl;
	this->_valeur = i << this->_nbBitsFract;
}

// Float constructor
Fixed::Fixed(const float f){
//	std::cout << "Float constructor called" << std::endl;
	//this->_valeur = static_cast<int>(f * (1 << this->_nbBitsFract)); //diff float for c
	this->_valeur = static_cast<int>(roundf(f * pow(2, this->_nbBitsFract)));

}

// Operators
Fixed& Fixed::operator=(const Fixed& other) {
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_valeur = other.getRawBits();
	return *this;
}

bool	Fixed::operator<(const Fixed& other) const{
	return this->_valeur < other._valeur;
}

bool	Fixed::operator>(const Fixed& other) const{
	return this->_valeur > other._valeur;
}

bool	Fixed::operator<=(const Fixed& other) const{
	return this->_valeur <= other._valeur;
}

bool	Fixed::operator>=(const Fixed& other) const{
	return this->_valeur >= other._valeur;
}

bool	Fixed::operator==(const Fixed& other) const{
	return this->_valeur == other._valeur;
}

bool	Fixed::operator!=(const Fixed& other) const{
	return this->_valeur != other._valeur;
}

Fixed	Fixed::operator+(const Fixed& other) const{
	Fixed ret;
	ret._valeur = this->_valeur + other._valeur;
	return ret;
}

Fixed	Fixed::operator-(const Fixed& other) const{
	Fixed ret;
	ret._valeur = this->_valeur - other._valeur;
	return ret;
}

/*
Fixed	Fixed::operator*(const Fixed& other) {
	Fixed ret;

	long long product = static_cast<long long>(this->_valeur) * other._valeur;
	// Overflow check
	if (product > std::numeric_limits<int>::max() || product < std::numeric_limits<int>::min())
		std::clog << "Multiplication result out of range for int type" << std::endl;

	ret._valeur = static_cast<int>(product >> nbBitsFract);	
	return ret;
}*/
Fixed	Fixed::operator*(const Fixed& other) const{
	return Fixed(this->toFloat() * other.toFloat());
}
/*
Fixed	Fixed::operator*(const Fixed& other) {
	Fixed ret;

	if (other._valeur == 0){
		std::clog << "Division by zero!" << std::endl;
		ret._valeur = 0;
		return ret;
	}
	long long temp = (static_cast<long long>(this->_valeur) << BITS_FRACTIONNAIRES) / other._valeur;
	ret._valeur = static_cast<int>(temp);
	return ret;
}*/
Fixed	Fixed::operator/(const Fixed& other) const{

	if (other._valeur == 0){
		std::clog << "Division by zero!" << std::endl;
		return Fixed(0);
	}

	return Fixed(this->toFloat() / other.toFloat());
}

//Pre increment ++x
Fixed&	Fixed::operator--(void) {
	--this->_valeur;
	return *this;
}

Fixed&	Fixed::operator++(void) {
	++this->_valeur;
	return *this;
}

//Post increment x++
Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed const &Fixed::min(Fixed &f1, Fixed &f2) {
	return Fixed::min(const_cast<Fixed const &>(f1), f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2) {
	return f1 > f2 ? f2 : f1;
}

Fixed const &Fixed::max(Fixed &f1, Fixed &f2) {
	return Fixed::max(const_cast<Fixed const &>(f1), f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2) {
	return f2 > f1 ? f2 : f1;
}

// Destructor
Fixed::~Fixed(void){
//	std::cout << "Default destructor called" << std::endl;
}

// Public member functions
int Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called" << std::endl;
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
