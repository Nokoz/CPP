/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:59 by gvardaki          #+#    #+#             */
/*   Updated: 2024/01/24 08:22:14 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; av[j][i] != '\0'; i++)
				std::cout << (char) toupper(av[j][i]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
