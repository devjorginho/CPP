/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/10 14:39:36 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "BRAIN DEFAULT CONSTRUCTOR" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "BRAIN COPY CONSTRUCTOR" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "BRAIN COPY ASSIGNMENT OPERATOR" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "BRAIN DESTRUCTOR" << std::endl;
}

void Brain::setIdea(int i, const std::string &idea) {
	if (i < 0 || i >= 100) {
		return;
	}
	this->ideas[i] = idea;
}

void Brain::fillIdeas(const std::string &genericIdea) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = genericIdea + " " + std::to_string(i + 1);
	}
}

std::string Brain::getIdea(int i) const {
	if (i < 0 || i >= 100) {
		return "";
	}
	return this->ideas[i];
}
