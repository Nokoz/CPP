/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:38:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:21:28 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Constructors
Cat::Cat(void) : A_Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat& other) : A_Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*(other._brain));
	return ;
}

//Operator
Cat& Cat::operator=(const Cat& other) {
	A_Animal::operator=(other);
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	return *this;
}

//Desturctor
Cat::~Cat(void) {
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
	return ;
}

//Public functions
void Cat::makeSound(void) const {
	std::cout << "Miaouw miaouw" << std::endl;
}
