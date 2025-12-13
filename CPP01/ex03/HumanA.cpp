/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:08:32 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 10:46:44 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string startname, Weapon &weapontype) :
        weapon(weapontype), name(startname) {};
		
void	HumanA::attack() {
	std::cout << name 
	<< " attacks with their " 
	<< weapon.getType() << std::endl;
}