/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/02 18:48:39 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Core unit " << this->name << " online" << std::endl;
}

ClapTrap::ClapTrap() {
	this->name = "Base_Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Core unit " << this->name << " online" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "Core unit " << this->name << " cloned" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Core unit " << this->name << " shutting down" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints <= 0) {
		std::cout << "Core unit " << name << " cannot act, non-operational" << std::endl;
		return;
	}
	if (energyPoints <= 0) {
		std::cout << "Core unit " << name << " is drained" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "Core unit " << name << " fires at " << target
		<< ", output " << attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "Core unit " << name << " already down" << std::endl;
		return;
	}
	hitPoints -= static_cast<int>(amount);
	if (hitPoints < 0) hitPoints = 0;
	std::cout << "Core unit " << name << " received " << amount << " damage, HP " << hitPoints << " left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "Core unit " << name << " cannot self-repair in shutdown" << std::endl;
		return;
	}
	if (energyPoints <= 0) {
		std::cout << "Core unit " << name << " lacks power for repair" << std::endl;
		return;
	}
	energyPoints--;
	hitPoints += static_cast<int>(amount);
	std::cout << "Core unit " << name << " recovered " << amount << " HP, now " << hitPoints << "" << std::endl;
}