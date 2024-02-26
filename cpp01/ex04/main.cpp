/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:31:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 15:35:31 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "Error, need 3 parameters" << std::endl;
		return (1);
	}
	std::ifstream in(av[1], std::ios::in);
	if (!in.isopen()) {
		std::cerr << "Error, can't open file" << std::endl;
		return (1);
	}
	Replace		replace;
	std::string result;
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::getlin(in, result, '\0');
	in.close();

	result = replace.ft_replace(

	return (0);
}
