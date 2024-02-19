/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:39:26 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/19 16:43:05 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Constructor
PhoneBook::PhoneBook(void){

	return;
}

//Desturctor
PhoneBook::~PhoneBook(void){

	return;
}

void PhoneBook::menu(){
	std::cout << "<<---------- PhoneBook ---------->>" <<std::endl;
	std::cout << "<<      ADD                      >>" <<std::endl;
	std::cout << "<<      SEARCH                   >>" <<std::endl;
	std::cout << "<<      EXIT                     >>" <<std::endl;
	std::cout << "<<------------------------------->>" <<std::endl;
	std::cout << " > ";
}

void PhoneBook::add(int index){
	std::string value;
	std::cout << "<<----- Adding new contact ------>>" <<std::endl;
	std::cout << " Entre first name" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index-1].set_var("first_name", value);
}
