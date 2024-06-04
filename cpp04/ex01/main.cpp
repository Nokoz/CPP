/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:09:19 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 12:04:08 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/*
int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); // will output the wrong cat sound!
//	static_cast<WrongCat const *>(wrongI)->makeSound();
	wrongMeta->makeSound();

	delete wrongI;
	delete wrongMeta;

	return (0);
}
*/
int main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const Dog *j2 = new Dog();
	const Cat *i2 = new Cat();
	const Animal *array[6] = {0};

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
	// const WrongAnimal *wrongI2 = new WrongCat(*wrongI);
	// const WrongCat *wrongI3 = new WrongCat(*wrongI);
	// delete wrongI3; // this will delete wrongI3.brain and wrongI.brain
	// delete wrongI2; // this will not delete wrongI2.brain
	// delete wrongI; // this will double delete wrongI.brain and wrongI3.brain

	return 0;
}
