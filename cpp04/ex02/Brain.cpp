/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:20:05 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 11:48:34 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Constructors
Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;

	return ;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];

	return ;
}

//Operator
Brain& Brain::operator=(const Brain& other) {
	if (this != &other)
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = other._ideas[i];

	return *this;
}

//Desturctor
Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;

	return ;
}
