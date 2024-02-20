/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:49:48 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/20 16:07:10 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Constructor
Contact::Contact(void){
	return;
}

//Desturctor
Contact::~Contact(void){
	return;
}

void Contact::set_var(std::string var, std::string value){
	if (value.length() > 10){
		value[9] = '.';
		value.erase(10, value.length() - 10);
	}
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

std::string Contact::show_var(std::string var) const{

	if (var == "first_name") {
		return (this->_first_name);
	} else if (var == "last_name") {
		return (this->_last_name);
	} else if (var == "nickname") {
		return (this->_nickname);
	} else if (var == "phone_num") {
		return (this->_phone_num);
	} else if (var == "dark_secret") {
		return (this->_dark_secret);
	}
	else
		return ("NULL");
}
