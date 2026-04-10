/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 13:47:37 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WRONGCAT DEFAULT CONSTRUCTOR" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	std::cout << "WRONGCAT COPY CONSTRUCTOR" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "WRONGCAT COPY ASSIGNMENT OPERATOR" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WRONGCAT DESTRUCTOR" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WRONG CAT MEOW MEOW!" << std::endl;
}
