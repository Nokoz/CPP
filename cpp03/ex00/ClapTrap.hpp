/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:31:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/29 12:28:38 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

// Includes
# include <iostream>

// Class declaration
class ClapTrap {
	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		// Operators
		ClapTrap& operator=(const ClapTrap& other);
		std::ostream &operator<<(std::ostream &o, ClapTrap const &i);	
		// Destructor
		~ClapTrap(void);

		// Public member functions
		std::string		getName(void);
		unsigned int	getHp(void);
		unsigned int	getEnergy(void);
		unsigned int	getDmg(void);
		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

	private:
		// Private member variables
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_dmg;

};

#endif // ClapTrap_HPP
