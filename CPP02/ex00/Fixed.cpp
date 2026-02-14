/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/02/14 11:19:37 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	this->rawBitsRepresentation = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->rawBitsRepresentation = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->rawBitsRepresentation = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBitsRepresentation);
}

void Fixed::setRawBits(int const raw) {
	this->rawBitsRepresentation = raw;
}



