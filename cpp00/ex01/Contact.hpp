/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:41:17 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/20 10:02:47 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
# define Contact_HPP

// Includes
# include <iostream>

// Class declaration
class Contact {
public:
    // Constructors
    Contact(void);
    // Destructor
    ~Contact(void);

    // Public member functions
    void set_var(std::string var, std::string value);
	std::string show_var(std::string var) const;
    
private:
    // Private member variables
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_num;
	std::string _dark_secret;
};

#endif // Contact_HPP
