/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/02 18:49:01 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Defense unit " << this->name << " online" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("Guardian_Default") {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Defense unit " << this->name << " online" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "Defense unit " << this->name << " cloned" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Defense unit " << this->name << " offline" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (hitPoints <= 0) {
		std::cout << "Defense unit " << name << " cannot attack (offline)" << std::endl;
		return;
	}
	if (energyPoints <= 0) {
		std::cout << "Defense unit " << name << " cannot attack (no energy)" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "Defense unit " << name << " engages " << target
		<< ", damage " << attackDamage << "" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "Defense unit " << name << " guarding the gate" << std::endl;
}