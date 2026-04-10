/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 14:41:07 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	this->brain->fillIdeas("Cat ideia");
	std::cout << "CAT DEFAULT CONSTRUCTOR" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "CAT COPY CONSTRUCTOR" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		this->type = other.type;
		if (this->brain)
			*this->brain = *other.brain;
		else
			this->brain = new Brain(*other.brain);
	}
	std::cout << "CAT COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "CAT DESTRUCTOR" << std::endl;
}

std::string Cat::getBrainIdea(int index) const {
	return this->brain ? this->brain->getIdea(index) : std::string();
}

void Cat::makeSound() const {
	std::cout << "MEOW MEOW!" << std::endl;
}