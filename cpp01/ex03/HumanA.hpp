/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:49:16 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 10:42:12 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

// Includes
# include <iostream>
# include "Weapon.hpp"

// Class declaration
class HumanA {
	public:
		// Constructors
		HumanA(const std::string name, Weapon& w);
		// Destructor
		~HumanA(void);

		// Public member functions
		const std::string& get_name(void) const;
		void attack();

	private:
		// Private member variables
		std::string _name;
		Weapon&		_weapon;

};

#endif // HumanA_HPP
