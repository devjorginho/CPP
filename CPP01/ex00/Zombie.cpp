/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:12:44 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 08:45:19 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
};

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

