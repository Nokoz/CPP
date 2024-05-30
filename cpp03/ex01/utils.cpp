/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:07:12 by gvardaki          #+#    #+#             */
/*   Updated: 2024/05/30 10:59:16 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ft_gen_rand(const unsigned int range, const unsigned int offset) {

	// Providing a seed value
	std::srand((unsigned) std::time(NULL));

	// Get a random number
	unsigned int random = offset + (std::rand() % range);

	return random;
}

