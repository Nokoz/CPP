/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:38:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 11:52:12 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Constructors
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*(other._brain));
	return ;
}

//Operator
Dog& Dog::operator=(const Dog& other) {
	Animal::operator=(other);
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	return *this;
}

//Desturctor
Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
	return ;
}

//Public functions
void Dog::makeSound(void) const {
	std::cout << "Woof woof" << std::endl;
}
