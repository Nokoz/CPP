/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:08:42 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 13:36:36 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructors
Zombie::Zombie(void) {
	return ;
}

//Desturctor
Zombie::~Zombie(void){
	std::clog << this->_name << " destoyed" << std::endl;
	return ;
}

void Zombie::set_name(std::string name) {
	this->_name = name;
}

void Zombie::announce(void) const{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
