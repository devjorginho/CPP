/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:42:01 by jde-carv          #+#    #+#             */
/*   Updated: 2026/04/02 18:47:26 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap robot("Robot 1");
	ClapTrap clone(robot);
	ClapTrap defaultBot;

	robot.attack("Target A");
	robot.takeDamage(4);
	robot.beRepaired(3);
	robot.attack("Target B");

	for (int i = 0; i < 11; ++i)
		robot.attack("Target C");

	clone.takeDamage(15);
	clone.beRepaired(5);

	defaultBot.beRepaired(2);
	defaultBot.takeDamage(10);
	defaultBot.attack("Target D");
	defaultBot.takeDamage(1);
	defaultBot.beRepaired(1);

	return 0;
}
