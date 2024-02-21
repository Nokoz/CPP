/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:03:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 11:04:50 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

// Includes
# include <iostream>

// Class declaration
class Zombie {
public:
    // Constructors
    Zombie(std::string& name);
    // Destructor
    ~Zombie(void);

    // Public member functions
    void announce(void) const;
    
private:
    // Private member variables
	std::string _name;
	
};

#endif // Zombie_HPP
