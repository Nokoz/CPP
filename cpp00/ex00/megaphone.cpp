/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:59 by gvardaki          #+#    #+#             */
/*   Updated: 2024/01/23 12:52:49 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(int ac, char **av)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; av[j][i] != '\0'; i++)
				cout << (char) toupper(av[j][i]);
			cout << " ";
		}
		cout << endl;
	}
	return (0);
}
