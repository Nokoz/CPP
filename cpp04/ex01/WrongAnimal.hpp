/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:55:54 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:46:29 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

// Includes
# include <iostream>

// Class declaration
class WrongAnimal {
	public:
		// Constructors
		WrongAnimal(void);
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& other);
		// Operators
		WrongAnimal& operator=(const WrongAnimal& other);
		// Destructor
		virtual ~WrongAnimal(void);

		// Public member functions
		std::string getType(void) const;
		void	makeSound(void) const;

	protected:
		// Private member variables
		std::string _type;

};
std::ostream &operator<<(std::ostream &os, WrongAnimal const &a);

#endif // WrongAnimal_HPP
