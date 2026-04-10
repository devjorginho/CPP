/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 14:41:07 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->fillIdeas("Dog ideia");
	std::cout << "DOG DEFAULT CONSTRUCTOR" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "DOG COPY CONSTRUCTOR" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		this->type = other.type;
		if (this->brain)
			*this->brain = *other.brain;
		else
			this->brain = new Brain(*other.brain);
	}
	std::cout << "DOG COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "DOG DESTRUCTOR" << std::endl;
}

std::string Dog::getBrainIdea(int index) const {
	return this->brain ? this->brain->getIdea(index) : std::string();
}

void Dog::makeSound() const {
	std::cout << "BARK BARK!" << std::endl;
}