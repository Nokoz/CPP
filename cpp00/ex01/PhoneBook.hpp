/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:36:08 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/20 15:49:04 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

// Includes
# include <iostream>
# include <iomanip>
//# include <string>
//# include <cstring>
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
		void menu(void);
		void contact_header(void) const;
		void add(int index);
		void show_contact(void) const;
		void search_contact(void);
		void contact_details(int i) const;

	private:
		// Private member variables
		Contact _contact[8];

};

#endif // PhoneBook_HPP
