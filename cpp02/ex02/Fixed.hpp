/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:12:58 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/28 11:01:19 by gvardaki         ###   ########.fr       */
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
		// Operators
		Fixed& operator=(const Fixed& other);
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed& operator--(void);
		Fixed& operator++(void);
		Fixed operator--(int);
		Fixed operator++(int);

		static Fixed const &min(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed const &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);


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
