/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 13:32:35 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "DOG DEFAULT CONSTRUCTOR" << std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	std::cout << "DOG COPY CONSTRUCTOR" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "DOG COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "DOG DESTRUCTOR" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "BARK BARK!" << std::endl;
}