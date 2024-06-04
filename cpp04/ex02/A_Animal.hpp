/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:54 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:19:35 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_HPP
# define A_Animal_HPP

// Includes
# include <iostream>

// Class declaration
class A_Animal {
	public:
		// Constructors
		A_Animal(void);
		A_Animal(const std::string& type);
		A_Animal(const A_Animal& other);
		// Operators
		A_Animal& operator=(const A_Animal& other);
		// Destructor
		virtual ~A_Animal(void);

		// Public member functions
		std::string getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		// Private member variables
		std::string _type;

};
std::ostream &operator<<(std::ostream &os, A_Animal const &a);

#endif // A_Animal_HPP
