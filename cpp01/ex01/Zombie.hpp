/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:03:02 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/21 13:35:43 by gvardaki         ###   ########.fr       */
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
    Zombie(void);
    // Destructor
    ~Zombie(void);

    // Public member functions
    void	announce(void) const;
	void	set_name(std::string name);
    
private:
    // Private member variables
	std::string _name;
	
};

Zombie	*zombieHorde(int N, std::string name);

#endif // Zombie_HPP
