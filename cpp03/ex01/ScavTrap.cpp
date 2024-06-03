/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:32:21 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/03 15:01:52 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap " << *this;
	std::cout << " default constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << *this;
	std::cout << " constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap " << *this;
	std::cout << " copy constructor called" << std::endl;
	return ;
}

//Operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
//	std::cout << "Scav =assigne is made of " << *this << std::endl; //Called between destructor of big Joe
	ClapTrap::operator=(other);
	return *this;
}

//Desturctor
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << *this;
	std::cout << " destructor called" << std::endl;
	return ;
}

//Public functions
void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << *this;
	std::cout << " is now in Gate keeper mode!" << std::endl;
}

bool ScavTrap::attack(const std::string &target) {
	if (!this->consumeEnergy())
		return false;
	std::cout << "ScavTrap " << *this;
	std::cout << " attacks " << target << " for " << this->_dmg << " damages" << std::endl;
	return true;
}
