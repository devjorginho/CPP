/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:07:20 by jde-carv          #+#    #+#             */
/*   Updated: 2026/01/03 06:51:38 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie *horde = zombieHorde(3, "denzel washington");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	delete[] horde;
}
