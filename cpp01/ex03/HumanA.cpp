/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:19:05 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 10:41:49 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//Constructor
HumanA::HumanA(const std::string name, Weapon& w) : _name(name), _weapon(w) {

	return ;
}

//Desturctor
HumanA::~HumanA(void){

	return ;
}

void HumanA::attack(void) {
	
	std::cout << this->get_name() << " attacks with their " << this->_weapon.getType() << std::endl;
}

const std::string&	HumanA::get_name(void) const {
	return (this->_name);
}
