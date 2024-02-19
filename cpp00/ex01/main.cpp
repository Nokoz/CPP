/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:54:32 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/19 16:12:37 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void){

	PhoneBook	book;
	std::string	cmd;
	int			i = 1;

	while (1) {
		book.menu();
		std::cin >> cmd;
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD"){
			book.add(i);
			if (i < 8)
				i++;
		}
		else if (cmd == "SEARCH"){

		}

	}
}
