/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:18:33 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 09:48:56 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

// Includes
# include <iostream>

// Class declaration
class Weapon {
	public:
		// Constructors
		Weapon(const std::string& t);
		// Destructor
		~Weapon(void);

		// Public member functions
		const std::string& getType(void) const;
		void	setType(const std::string& new_type);

	private:
		// Private member variables
		std::string _type;
};

#endif // Weapon_HPP
