/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:38:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:54:12 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Constructors
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	return ;
}

//Operator
WrongCat& WrongCat::operator=(const WrongCat& other) {
	WrongAnimal::operator=(other);
	return *this;
}

//Desturctor
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

//Public functions
void WrongCat::makeSound(void) const {
	std::cout << "WrongMiaouwww " << std::endl;
}
