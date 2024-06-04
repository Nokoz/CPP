/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:42:06 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 13:13:05 by gvardaki         ###   ########.fr       */
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
	std::cout << "Copy constructor called for another " << *this << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) 
	: _hp(10), _energy(10), _dmg(0) {
	this->_name = name;
	std::cout << "Constructor for " << *this << " called" << std::endl;
	return ;
}
//Operator
ClapTrap& ClapTrap::operator=(ClapTrap const &other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_dmg = other._dmg;
	return *this;
}

std::ostream &operator<<(std::ostream &os, ClapTrap const &c) {
	os << c.getName();
	return os;
}

//Desturctor
ClapTrap::~ClapTrap(void){
	std::cout << "Default destructor called for " << *this << std::endl;
	return ;
}

//Public functions
std::string		ClapTrap::getName(void) const {
	return this->_name;
}
unsigned int	ClapTrap::getHp(void) const {
	return this->_hp;
}
unsigned int	ClapTrap::getEnergy(void) const {
	return this->_energy;
}
unsigned int	ClapTrap::getDmg(void) const {
	return this->_dmg;
}

void	ClapTrap::setDmg(unsigned int amount) {
	this->_dmg = amount;
}
bool 	ClapTrap::attack(const std::string& target) {
	if (!this->consumeEnergy())
		return false;
	std::cout << "ClapTrap " << *this << " attacks " << target << ", causing " << this->_dmg
		<< " points of dammage" << std::endl;
		return true;
}
void 	ClapTrap::takeDamage(unsigned int amount) {
	this->_hp -= amount > this->_hp ? this->_hp : amount;
	std::cout << *this << " takes " << amount << " damages, HP left : " << this->_hp << std::endl;
	if (this->_hp < 5 && this->_hp > 0) {
		this->beRepaired(ft_gen_rand(3, 1));
	}
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->consumeEnergy())
		return ;
	std::cout << *this << " starts some repairs...." << std::endl;
	for (unsigned int i = 0; i < amount; i++) {
		std::cout << ".\n";
		sleep(1);
	}
	this->_hp += amount;
}

bool	ClapTrap::isAlive(void) {
	if (this->_hp <= 0) {
		std::cout << "ClapTrap " << *this << " died" << std::endl;
		return false;
	}
	return true;
}

bool	ClapTrap::consumeEnergy(void) {
	if (this->_energy > 0) {
		this->_energy -= 1;
		return true;
	}
	else {
		std::cout << "ClapTrap " << *this <<" is out of energy" << std::endl;
		this->_hp = 0;
		return false;
	}
}

void ClapTrap::takesWeapon(void) {
	unsigned int amount = ft_gen_rand(5, 2);
		std::cout << "ClapTrap " << *this << " takes a random weapon that has " << amount << " atk" << std::endl;
	this->setDmg(amount);
}
