/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:49 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 11:10:31 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

// Includes
# include <iostream>
# include "Animal.hpp"

// Class declaration
class Dog : public Animal {
	public:
		// Constructors
		Dog(void);
		Dog(const Dog& other);
		// Operators
		Dog& operator=(const Dog& other);
		// Destructor
		~Dog(void);

		virtual void makeSound(void) const;
};

#endif // Dog_HPP
