/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:38:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:21:24 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Constructors
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& other) : Animal (other) {
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

//Operator
Dog& Dog::operator=(const Dog& other) {
	Animal::operator=(other);
	return *this;
}

//Desturctor
Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

//Public functions
void Dog::makeSound(void) const {
	std::cout << "Woof woof" << std::endl;
}
