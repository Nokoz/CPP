/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:27:48 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 10:32:55 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Constructor
Weapon::Weapon(const std::string& t) : _type(t) {

	return ;
}

//Desturctor
Weapon::~Weapon(void){
	std::cout << "Weapon: " << this->getType() << " destroyed" << std::endl;
	return ;
}

const std::string&	Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(const std::string& new_type) {
	this->_type = new_type;
}
