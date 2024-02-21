/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:17:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 11:44:29 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.h"

int	main(int ac, char **av){
	Zombie		*heap;
	Zombie		*named;
	std::string	name;

	if (ac > 1){
		name = av[1];
		named = newZombie(name);
		named->announce();
		delete named;
		exit(0);
	}
	heap = newZombie("heap");
	heap->announce();
	randomChump("stack");
	delete heap;

	return (0);
}
