/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:12:58 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/28 08:55:22 by gvardaki         ###   ########.fr       */
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
		// Int constructor
		Fixed(const int i);
		// Float constructor
		Fixed(const float f);
		// Assignment operator
		Fixed& operator=(const Fixed& other);

		// Destructor
		~Fixed(void);

		// Public member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const ;

	private:
		// Private member variables
		int					_valeur;
		static const int	_nbBitsFract = 8;

};
std::ostream& operator<<(std::ostream& os, const Fixed& fi);

#endif // Fixed_HPP
