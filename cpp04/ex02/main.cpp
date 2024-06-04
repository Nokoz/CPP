/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:09:19 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:24:13 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/*
int main(void)
{
	const A_Animal *j = new Dog();
	const A_Animal *i = new Cat();
	const Dog *j2 = new Dog();
	const Cat *i2 = new Cat();
	const A_Animal *array[6] = {0};

	delete i;
	delete j;

	for (int n = 0; n < 3; ++n)
		array[n] = new Dog(*j2);

	for (int n = 3; n < 6; ++n)
		array[n] = new Cat(*i2);

	for (int n = 0; n < 6; ++n)
		delete array[n];

	delete i2;
	delete j2;

	// const WrongCat *wrongI = new WrongCat();
	// const WrongA_Animal *wrongI2 = new WrongCat(*wrongI);
	// const WrongCat *wrongI3 = new WrongCat(*wrongI);
	// delete wrongI3; // this will delete wrongI3.brain and wrongI.brain
	// delete wrongI2; // this will not delete wrongI2.brain
	// delete wrongI; // this will double delete wrongI.brain and wrongI3.brain

	return 0;
}
*/
int main(void)
{
	const A_Animal *j = new Dog();
	const A_Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete i;
	delete j;

	// delete new A_Animal(); // this will not compile

	return 0;
}
