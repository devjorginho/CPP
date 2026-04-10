/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 14:03:03 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout << "ANIMAL DEFAULT CONSTRUCTOR" << std::endl;
}

Animal::Animal(const Animal &other) {
	this->type = other.type;
	std::cout << "ANIMAL COPY CONSTRUCTOR" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "ANIMAL COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "ANIMAL DESTRUCTOR" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "ANIMAL MAKES A SOUND" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

