/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:50:27 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 13:12:31 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scavTrap2("Joe");
	ScavTrap scavTrap3(scavTrap2);
	ClapTrap clapTrap2("Alice");

	scavTrap3 = ScavTrap("Big Joe");
	clapTrap2.takesWeapon();
	sleep(1);
	while (scavTrap3.isAlive() && clapTrap2.isAlive()) {
		if (clapTrap2.attack(scavTrap3.getName()))
			scavTrap3.takeDamage(clapTrap2.getDmg());
		if (!scavTrap3.isAlive())
			return (0);
		if (scavTrap3.attack(clapTrap2.getName()))
			clapTrap2.takeDamage(scavTrap3.getDmg());
	}
	scavTrap3.guardGate();
	return (0);
}
