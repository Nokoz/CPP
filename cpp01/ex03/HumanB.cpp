/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:19:05 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 10:49:38 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//Constructor
HumanB::HumanB(const std::string name) : _name(name) {

	return ;
}

HumanB::HumanB(const std::string name, Weapon* w) : _name(name), _weapon(w) {

	return ;
}

//Desturctor
HumanB::~HumanB(void){

	return ;
}

void HumanB::attack(void) {
	
	std::cout << this->get_name() << " attacks with their " << this->_weapon->getType() << std::endl;
}

const std::string&	HumanB::get_name(void) const {
	return (this->_name);
}
