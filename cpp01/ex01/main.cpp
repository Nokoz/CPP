/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:03:50 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/09 11:40:13 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Zombie.hpp"

int	main(int ac, char **av) {
	int 		size = 0;
	std::string	name;
	Zombie		*horde;

	if (ac != 3) {
		std::cout << "Usage : ./horde [size] [name]" << std::endl;
		exit(1);
	}
	size = atoi(av[1]);
	name = av[2];
	horde = zombieHorde(size, name);
	for (int i = 0 ; i < size ; i++) {
		horde[i].announce();
	}
	delete[] horde;
	sleep(15);
	return (0);
}
