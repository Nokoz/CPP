/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:31:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 11:28:15 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

// Includes
# include <iostream>
#include <unistd.h>

// Class declaration
class ClapTrap {
	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		// Operators
		ClapTrap& operator=(ClapTrap const &other);
		// Destructor
		~ClapTrap(void);

		// Public member functions
		std::string		getName(void) const;
		unsigned int	getHp(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDmg(void) const;
		void			setDmg(unsigned int amount);
		bool			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		bool 			isAlive(void);
		bool			consumeEnergy(void);
		void 			takesWeapon(void);

	private:
		// Private member variables
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_dmg;

};
std::ostream &operator<<(std::ostream &os, ClapTrap const &c);	

int ft_gen_rand(const unsigned int range, const unsigned int offset);

#endif // ClapTrap_HPP
