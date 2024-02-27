/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:55:03 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/27 09:46:21 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{

	if (ac != 2) {
		std::cerr << "Error, need 1 parameters" << std::endl;
		return (1);
	}
	Harl		harl;
	std::string	level;

	level = av[1];
	harl.complain(level);

	return (0);
}
