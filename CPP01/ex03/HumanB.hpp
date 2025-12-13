/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:08:26 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 10:51:17 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapontype);
    void attack();
};


#endif 