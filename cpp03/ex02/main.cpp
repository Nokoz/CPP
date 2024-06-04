/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:50:27 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/03 15:37:21 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap bob("Bob");
	ScavTrap alice("Alice");
	FragTrap joe("Joe");

	bob.attack(alice.getName());
	alice.guardGate();
	joe.highFiveGuys();
	return (0);
}
