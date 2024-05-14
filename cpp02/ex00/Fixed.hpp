/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:12:58 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/13 13:03:31 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

// Includes
# include <iostream>

// Class declaration
class Fixed {
	public:
		// Default constructor
		Fixed(void);
		// Copy constructor
		Fixed(const Fixed& other);
		// Assignment operator
		Fixed& operator=(const Fixed& other);

		// Destructor
		~Fixed(void);

		// Public member functions
		int getRawBits() const;
		void setRawBits(int const raw);

	private:
		// Private member variables
		int					_valeur;
		static const int	_nbBitsFract = 8;

};

#endif // Fixed_HPP
