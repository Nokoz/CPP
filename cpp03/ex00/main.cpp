/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:50:27 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 11:41:49 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("Alice");
	ClapTrap clapTrap3(clapTrap2);

	clapTrap3 = ClapTrap("Bob");

	clapTrap3.takesWeapon();
	sleep(1);
	clapTrap2.takesWeapon();
	while (clapTrap3.isAlive() && clapTrap2.isAlive()) {
		if (clapTrap2.attack(clapTrap3.getName()))
			clapTrap3.takeDamage(clapTrap2.getDmg());
		if (!clapTrap3.isAlive())
			return (0);
		if (clapTrap3.attack(clapTrap2.getName()))
			clapTrap2.takeDamage(clapTrap3.getDmg());
	}
	return (0);
}
