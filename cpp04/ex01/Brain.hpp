/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:20:40 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 11:24:56 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

// Includes
# include <iostream>

// Class declaration
class Brain {
	public:
		// Constructors
		Brain(void);
		Brain(const Brain& other);
		// Operators
		Brain& operator=(const Brain& other);
		// Destructor
		~Brain(void);

		// Public member functions
		void someFunction();

	private:
		// Private member variables
		std::string _ideas[100];

};

#endif // Brain_HPP
