#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Mech " << this->name << " activated" << std::endl;
}

ClapTrap::ClapTrap() {
	this->name = "Generic";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Mech " << this->name << " activated" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "Mech " << this->name << " duplicated" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Mech " << this->name << " deactivated" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints <= 0) {
		std::cout << "Mech " << name << " is offline, cannot engage" << std::endl;
		return ;
	}
	if (energyPoints <= 0) {
		std::cout << "Mech " << name << " lacks power, cannot attack" << std::endl;
		return ;
	}
	energyPoints = energyPoints - 1;
	std::cout << "Mech " << name << " fires at " << target
		<< ", dealing " << attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "Mech " << name << " is already down" << std::endl;
		return ;
	}
	hitPoints -= static_cast<int>(amount);
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "Mech " << name << " takes " << amount
		<< " damage, HP now " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "Mech " << name << " is offline, cannot repair" << std::endl;
		return ;
	}
	if (energyPoints <= 0) {
		std::cout << "Mech " << name << " lacks power, cannot repair" << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += static_cast<int>(amount);
	std::cout << "Mech " << name << " repairs " << amount
		<< " HP, HP now " << hitPoints << std::endl;
}
