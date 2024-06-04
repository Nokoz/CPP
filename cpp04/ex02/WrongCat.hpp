/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:59:49 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:51:35 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

// Includes
# include <iostream>
# include "WrongAnimal.hpp"

// Class declaration
class WrongCat : public WrongAnimal {
	public:
		// Constructors
		WrongCat(void);
		WrongCat(const WrongCat& other);
		// Operators
		WrongCat& operator=(const WrongCat& other);
		// Destructor
		~WrongCat(void);

		void makeSound(void) const;
};

#endif // WrongCat_HPP
