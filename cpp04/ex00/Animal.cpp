/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:18 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:13:19 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors
Animal::Animal(void) : _type("Default") {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Animal::Animal(const std::string& type) : _type(type) {
	std::cout << "Typed constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& other) : _type(other._type) {
	std::cout << "Copy constructor called for another " << *this << std::endl;
	return ;
}

//Operator
Animal& Animal::operator=(const Animal& other) {
	this->_type = other._type;
	return *this;
}

std::ostream &operator<<(std::ostream &os, Animal const &a) {
	os << a.getType();
	return os;
}

//Desturctor
Animal::~Animal(void) {
	std::cout << "Default destructor called for " << *this << std::endl;
}

//Public functions
std::string Animal::getType(void) const {
	return this->_type;
}

//Public functions
void Animal::makeSound(void) const {
	std::cout << "Default sound" << std::endl;
}
