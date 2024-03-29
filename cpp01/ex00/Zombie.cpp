/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:08:42 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 13:40:53 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

//Constructor
Zombie::Zombie(std::string name) : _name(name) {
//	this->_name = name;
	return ;
}

//Desturctor
Zombie::~Zombie(void){
	std::clog << this->_name << " destoyed" << std::endl;
	return ;
}

void Zombie::announce(void) const{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
