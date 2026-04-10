/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/02 18:48:56 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
	std::cout << "[INIT] Instanciando unidades" << std::endl;
	ClapTrap basic("Basic1");
	ScavTrap defender("Defender1");
	FragTrap fighter("Fighter1");

	std::cout << "[BASE] Comportamento de ClapTrap" << std::endl;
	basic.attack("Target A");
	basic.takeDamage(5);
	basic.beRepaired(5);

	std::cout << "[GUARD] Comportamento de ScavTrap" << std::endl;
	defender.guardGate();
	defender.attack("Target B");
	defender.takeDamage(25);
	defender.beRepaired(10);

	std::cout << "[ASSAULT] Comportamento de FragTrap" << std::endl;
	fighter.highFivesGuys();
	fighter.attack("Target C");
	fighter.takeDamage(40);
	fighter.beRepaired(20);

	std::cout << "[ASSAULT] Esgotando energia" << std::endl;
	for (int i = 0; i < 101; ++i)
		fighter.attack("Dummy");

	std::cout << "[LIFECYCLE] Ordem de criacao e destrucao" << std::endl;
	{
		FragTrap localFrag("LocalFrag");
		localFrag.highFivesGuys();
		localFrag.takeDamage(100);
		localFrag.attack("NoOne");
	}
	std::cout << "[INFO] Unidades finalizam em ordem inversa" << std::endl;

	return 0;
}
