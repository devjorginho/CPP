/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:07:22 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 09:35:59 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
    std::cout << this->name
              << " has been destroyed." << std::endl;
}

std::string Zombie::getName(void) {
	return (this->name);
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << this->name 
	<< " : BraiiiiiiinnnzzzZ..." 
	<< std::endl;
}