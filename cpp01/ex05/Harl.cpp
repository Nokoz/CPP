/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:58:17 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/27 09:49:13 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Constructor
Harl::Harl(void){

	return;
}

//Desturctor
Harl::~Harl(void){

	return;
}

void	Harl::debug(void) {
	std::cout << "This is a debug message" << std::endl;
}

void	Harl::info(void) {
	std::cout << "This is a general information" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "This is a BIG warning" << std::endl;
}

void	Harl::error(void) {
	std::cout << "THis is a critical error" << std::endl;
}

void	Harl::complain(std::string level) {
//Pointer declaration
	void (Harl::*debug)();
	void (Harl::*info)();
	void (Harl::*warning)();
	void (Harl::*error)();

//Pointeur init
	debug = &Harl::debug;
	info = &Harl::info;
	warning = &Harl::warning;
	error = &Harl::error;

	void (Harl::*fct_ptr_arr[4])() = {debug, info, warning, error};
	std::string levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*fct_ptr_arr[i])();
	}
}
