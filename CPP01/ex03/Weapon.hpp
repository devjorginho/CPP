/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:58:26 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 10:51:23 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
        
    public:
        Weapon(const std::string& weapontype); 
        std::string getType();
    	void setType(const std::string &weapontype);
};

#endif