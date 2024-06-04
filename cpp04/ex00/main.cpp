/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:09:19 by gvardaki          #+#    #+#             */
/*   Updated: 2024/06/04 10:56:40 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/*
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Animal	animal1;
	Cat		cat1;
	Dog		dog1;

	animal1.makeSound();
	cat1.makeSound();
	dog1.makeSound();

	return (0);
}
*/
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
