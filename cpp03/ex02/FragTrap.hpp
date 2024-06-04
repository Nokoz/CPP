/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:20:26 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/03 15:37:38 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

// Includes
# include <iostream>
#include "ClapTrap.hpp"

// Class declaration
class FragTrap : public ClapTrap {
	public:
		// Constructors
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap& other);
		// Operators
		FragTrap& operator=(const FragTrap& other);
		// Destructor
		~FragTrap(void);

		// Public member functions
		void highFiveGuys(void);

};

#endif // FragTrap_HPP
