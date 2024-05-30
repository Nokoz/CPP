/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:27:41 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 12:41:35 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

// Includes
# include <iostream>
# include "ClapTrap.hpp"

// Class declaration
class ScavTrap : public ClapTrap {
	public:
		// Constructors
		ScavTrap(void);
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap& other);
		// Operators
		ScavTrap& operator=(const ScavTrap& other);
		// Destructor
		~ScavTrap(void);

		// Public member functions
		void guardGate(void);

};

#endif // ScavTrap_HPP
