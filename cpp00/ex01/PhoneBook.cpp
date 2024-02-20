/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:39:26 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/20 16:08:48 by gvardaki         ###   ########.fr       */
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

void PhoneBook::menu(void){
	std::cout << "<<---------- PhoneBook ---------->>" <<std::endl;
	std::cout << "<<      ADD                      >>" <<std::endl;
	std::cout << "<<      SEARCH                   >>" <<std::endl;
	std::cout << "<<      EXIT                     >>" <<std::endl;
	std::cout << "<<------------------------------->>" <<std::endl;
	std::cout << " > ";
}

void PhoneBook::contact_header(void) const{
	std::cout	<< "<<---------------- Contacts ----------------->>\n"
				<< "<<     Index|First Name| Last Name|  Nickname>>\n"
				<< "<<------------------------------------------->>\n"<< std::endl;
}

void PhoneBook::add(int index){
	std::string value;

	std::cout << "<<----- Adding new contact ------>>" <<std::endl;
	std::cout << " Enter first name" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index].set_var("first_name", value);
	std::cout << " Enter last name" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index].set_var("last_name", value);
	std::cout << " Enter nickname" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index].set_var("nickname", value);
	std::cout << " Enter phone number" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index].set_var("phone_num", value);
	std::cout << " Enter darkest secret" << std::endl;
	std::cout << " > ";
	std::cin >> value;
	_contact[index].set_var("dark_secret", value);
}

void PhoneBook::show_contact(void) const{
	this->contact_header();
	for (int j = 0; j < 8; j++){
		std::cout << "<<" << std::setw(10) << j+1;
		std::cout << '|' << std::setw(10) << _contact[j].show_var("first_name");
		std::cout << '|' << std::setw(10) << _contact[j].show_var("last_name");
		std::cout << '|' << std::setw(10) << _contact[j].show_var("nickname");
		std::cout << ">>" << std::endl;
	}
}

void PhoneBook::search_contact(void){
	int			i = 0;
	std::string	index;

	this->show_contact();
	std::cout << "Enter index" << std::endl;
	std::cout << " > ";
	std::cin >> index;
	i = atoi(index.c_str());
	if (i < 1 || i > 8)
		std::cout << "Wrong input" << std::endl;
	else
		this->contact_details(i);
}

void PhoneBook::contact_details(int i) const{
	i -= 1;
	std::cout << _contact[i].show_var("first_name") << "\n"
				<<_contact[i].show_var("last_name") << "\n"
				<<_contact[i].show_var("nickname") << "\n"
				<<_contact[i].show_var("phone_num") << "\n"
				<<_contact[i].show_var("dark_secret") << "\n"
				<< std::endl;
}
