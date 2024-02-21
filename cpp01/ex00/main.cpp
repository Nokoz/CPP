/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:17:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 11:11:20 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.h"

int	main(int ac, char **av){
	std::string	name;
	Zombie		*named;
	Zombie		*heap;

	if (ac > 1){
		name = av[1];
		named = newZombie(name);
		named->announce();
		delete named;
		exit(0);
	}
	heap = newZombie("heap");
	randomChump("stack");
	heap->announce();
	delete heap;

	return (0);
}
