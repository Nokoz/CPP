/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:39:05 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 12:47:46 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef replace_HPP
# define replace_HPP

// Includes
# include <iostream>
# include <fstream>
# include <string.h>

// Class declaration
class Replace {
	public:
		// Constructors
		Replace(void);
		// Destructor
		~Replace(void);

		// Public member functions
		std::string ft_replace(std::string content, std::string s1, std::string s2);

};

#endif // replace_HPP
