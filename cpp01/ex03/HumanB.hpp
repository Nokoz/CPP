/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:49:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 10:52:10 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

// Includes
# include <iostream>
# include "Weapon.hpp"

// Class declaration
class HumanB {
	public:
		// Constructors
		HumanB(const std::string name);
		HumanB(const std::string name, Weapon *w);
		// Destructor
		~HumanB(void);

		// Public member functions
		const std::string& get_name(void) const;
		void attack(void);
		void setWeapon(Weapon *w);

	private:
		// Private member variables
		std::string _name;
		Weapon&		_weapon;

};

#endif // HumanA_HPP
