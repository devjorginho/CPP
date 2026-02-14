/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:16:14 by jde-carv          #+#    #+#             */
/*   Updated: 2026/02/14 12:48:11 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor has been called!" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::ClapTrap(std::string name) {
	std::cout << "<ClapTrap " << name << ": " << "created" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::~ClapTrap(void) {
	std::cout << "<ClapTrap " << this->name << ": " << "has been destroyed" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "<ClapTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	*this = other;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
};

