/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:36:08 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/19 16:34:21 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

// Includes
# include <iostream>
# include "Contact.hpp"

// Class declaration
class PhoneBook {
	public:
		// Constructors
		PhoneBook(void);
		// Destructor
		~PhoneBook(void);


		int	index;
		// Public member functions
		void menu();
		void add(int index);

	private:
		// Private member variables
		Contact _contact[8];

};

#endif // PhoneBook_HPP
