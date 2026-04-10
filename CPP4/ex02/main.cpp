/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 15:05:05 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "Cat idea 1: " << static_cast<const Cat*>(i)->getBrainIdea(0) << std::endl;
	std::cout << "Cat idea 100: " << static_cast<const Cat*>(i)->getBrainIdea(99) << std::endl;
	std::cout << "Dog idea 1: " << static_cast<const Dog*>(j)->getBrainIdea(0) << std::endl;
	std::cout << "Dog idea 100: " << static_cast<const Dog*>(j)->getBrainIdea(99) << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();

	delete j;
	delete i;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "The " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "The " << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	Animal *animals[50];
	for (int i = 0; i < 50; i++) {
		if (i < 25) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < 50; i++) {
		delete animals[i];
	}
	return 0;
}