/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/02 18:48:48 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Attack unit " << this->name << " initialized" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Assault_Default") {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Attack unit " << this->name << " initialized" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "Attack unit " << this->name << " cloned" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Attack unit " << this->name << " shutting down" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (hitPoints <= 0) {
		std::cout << "Attack unit " << name << " is offline" << std::endl;
		return;
	}
	if (energyPoints <= 0) {
		std::cout << "Attack unit " << name << " is out of charge" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "Attack unit " << name << " strikes " << target
		<< " (" << attackDamage << " damage)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Attack unit " << name << " asks for a high five" << std::endl;
}
