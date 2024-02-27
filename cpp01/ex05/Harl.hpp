/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 08:57:39 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/27 09:42:25 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

// Includes
# include <iostream>

// Class declaration
class Harl {
	public:
		// Constructors
		Harl(void);
		// Destructor
		~Harl(void);

		// Public member functions
		void complain(std::string level);

	private:
		// Private member variables
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif // Harl_HPP
