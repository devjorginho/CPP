/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 13:42:28 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	std::cout << "WRONGANIMAL DEFAULT CONSTRUCTOR" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "WRONGANIMAL COPY CONSTRUCTOR" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "WRONGANIMAL COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WRONGANIMAL DESTRUCTOR" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WRONGANIMAL MAKES A SOUND" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
