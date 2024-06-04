/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:18 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:19:21 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

//Constructors
A_Animal::A_Animal(void) : _type("Default") {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

A_Animal::A_Animal(const std::string& type) : _type(type) {
	std::cout << "Typed constructor called" << std::endl;
	return ;
}

A_Animal::A_Animal(const A_Animal& other) : _type(other._type) {
	std::cout << "Copy constructor called for another " << *this << std::endl;
	return ;
}

//Operator
A_Animal& A_Animal::operator=(const A_Animal& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::ostream &operator<<(std::ostream &os, A_Animal const &a) {
	os << a.getType();
	return os;
}

//Desturctor
A_Animal::~A_Animal(void) {
	std::cout << "Default destructor called for " << *this << std::endl;
}

//Public functions
std::string A_Animal::getType(void) const {
	return this->_type;
}
