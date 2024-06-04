/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:18 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:49:38 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal(void) : _type("Default") {
	std::cout << "WrongDefaultoonstructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
	std::cout << "WrongTyped constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
	std::cout << "WrongCopy constructor called for another " << *this << std::endl;
	return ;
}

//Operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->_type = other._type;
	return *this;
}

std::ostream &operator<<(std::ostream &os, WrongAnimal const &a) {
	os << a.getType();
	return os;
}

//Desturctor
WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongDefault destructor called for " << *this << std::endl;
}

//Public functions
std::string WrongAnimal::getType(void) const {
	return this->_type;
}

//Public functions
void WrongAnimal::makeSound(void) const {
	std::cout << "WrongDefault sound" << std::endl;
}
