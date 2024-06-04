/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:20:01 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/03 15:39:27 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap " << *this;
	std::cout << " default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_dmg = 30;
	return ;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << *this;
	std::cout << " constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_dmg = 30;

}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap " << *this;
	std::cout << " copy constructor called" << std::endl;
	return ;
}

//Operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
	ClapTrap::operator=(other);
	return *this;
}

//Desturctor
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << *this;
	std::cout << " destructor called" << std::endl;
	return ;
}

void FragTrap::highFiveGuys(void) {
	std::cout << *this << " is very happy and raises his hand for a big high five!" << std::endl;
}
