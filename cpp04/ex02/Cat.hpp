/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:49 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:22:08 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

// Includes
# include <iostream>
# include "A_Animal.hpp"
# include "Brain.hpp"

// Class declaration
class Cat : public A_Animal {
	public:
		// Constructors
		Cat(void);
		Cat(const Cat& other);
		// Operators
		Cat& operator=(const Cat& other);
		// Destructor
		~Cat(void);

		virtual void makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif // Cat_HPP
