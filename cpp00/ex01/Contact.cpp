/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:49:48 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/19 16:42:35 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Constructor
Contact::Contact(void){
	return;
}

//Desturctor
Contact::~Contact(void){

	std::cout << _first_name << std::endl;
	return;
}

void Contact::set_var(std::string var, std::string value){
	if (var == "first_name") {
		this->_first_name = value;
	} else if (var == "last_name") {
		this->_last_name = value;
	} else if (var == "nickname") {
		this->_nickname = value;
	} else if (var == "phone_num") {
		this->_phone_num = value;
	} else if (var == "dark_secret") {
		this->_dark_secret = value;
	}
}
