/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:15:57 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 15:46:41 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "string adress: " << &brain << std::endl;
	std::cout << "ptr: " << stringPTR << std::endl;
	std::cout << "ref: " << &stringREF << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << "string value: " << brain << std::endl;
	std::cout << "ptr value: " << *stringPTR << std::endl;
	std::cout << "red value: " << stringREF << std::endl;
	return (0);
}
