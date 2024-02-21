/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:42:15 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 11:08:14 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie	*newZombie(std::string name){
	Zombie	*heap = new Zombie(name);
	return (heap);
}

void	randomChump(std::string name){
	Zombie	stack(name);
	stack.announce();
}

