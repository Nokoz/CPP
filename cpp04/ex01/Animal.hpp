/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:54 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 11:58:07 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

// Includes
# include <iostream>

// Class declaration
class Animal {
	public:
		// Constructors
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
		// Operators
		Animal& operator=(const Animal& other);
		// Destructor
		virtual ~Animal(void);

		// Public member functions
		std::string getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		// Private member variables
		std::string _type;

};
std::ostream &operator<<(std::ostream &os, Animal const &a);

#endif // Animal_HPP
