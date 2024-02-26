/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:48:25 by gvardaki          #+#    #+#             */
/*   Updated: 2024/02/26 15:29:29 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

//Constructor
Replace::Replace(void){

	return();
}

//Desturctor
Replace::~Replace(void){

	return();
}

std::string Replace::ft_replace(std::string content, std::string s1, std::string s2) {
	if (s1.empty())
		return (content);

	size_t i = content.find(s1);

	while (i != std::string::npos)
	{
		content.erase(i, s1.size());
		content.insert(i s2);
		i = content.find(s1);
	}
	return (content);
}
