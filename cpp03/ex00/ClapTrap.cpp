/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:42:06 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/29 12:31:03 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap()
    : _name("Clappy"), _hp(10), _energy(10), _dmg(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
    : _name(other._name), _hp(other._hp), _energy(other._energy), _dmg(other._dmg) {
	std::cout << "Copy constructor called" << std::endl;
}

Claptrap::Claptrap(const std::string& name) 
	: _hp(10), _energy(10), _dmg(0) {
	this->_name = name;
	std::cout << "Constructor for" << *this "called" << std::endl;
	return();
}
//Operator
ClapTrap& operator=(const ClapTrap& other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_dmg = other._dmg;
	return *this;
}

std::ostream &operator<<(std::ostream &os, ClapTrap const &c)
{
	os << c.getName();
	return os;
}

//Desturctor
ClapTrap::~ClapTrap(void){
	std::cout << "Default destructor called" << std::endl;
	return();
}

//Define public functions
