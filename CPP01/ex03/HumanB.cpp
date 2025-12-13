/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:08:28 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 10:36:34 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string startname) : weapon(0), name(startname) {};

void HumanB::setWeapon(Weapon &weapontype) {
    weapon = &weapontype;
};

void HumanB::attack() {
    std::cout << name 
	<< " attacks with their " 
	<< weapon->getType() << std::endl;
};