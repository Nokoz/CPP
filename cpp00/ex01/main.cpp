/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:54:32 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/20 15:53:54 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void){

	PhoneBook	book;
	std::string	cmd;
	int			i = 0;

	while (1) {
		book.menu();
		std::cin >> cmd;
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD"){
			book.add(i);
			if (i < 7)
				i++;
			else
				i=0;
		}
		else if (cmd == "SEARCH"){
			book.search_contact();
		}
	}
	return (0);
}
