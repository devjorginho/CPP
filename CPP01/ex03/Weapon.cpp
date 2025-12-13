/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:58:28 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 10:51:25 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weapontype) : type(weapontype) {
};

std::string Weapon::getType() {
    return type;
};

void Weapon::setType(const std::string &weapontype) {
    type = weapontype;
};
