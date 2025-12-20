/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:57:06 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/20 21:34:12 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <string>

void Harl::debug() {
	std::cout <<  "[ DEBUG ]\n"
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger"
			  << ". I really do!\n"
			  << std::endl;
};

void Harl::info() {
	std::cout <<  "[ INFO ]\n" 
			  << "cannot believe adding extra bacon costs more money."
	          << " You didn’t put enough bacon in my burger! "
			  << "If you did, I wouldn’t be asking for more!\n"
			  << std::endl;
};

void Harl::warning() {
	std::cout <<  "[ WARNING ]\n" 
	          << "I think I deserve to have some extra bacon for free.\n"
			  << "I’ve been coming for years,"
			  << " whereas you started working here just last month.\n"
			  << std::endl;
};

void Harl::error() {
	std::cout << "[ ERROR ]\n"
			  << "This is unacceptable! I want to speak to the manager now.\n"
			  << std::endl;
};

void Harl::complain(std::string level) {
	std::string levelArray[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for(int i = 0; i < 4; i++) {
		while (levelArray[i] == level) {
			switch(i) {
				case 0:
					debug();
				case 1:
					info();
				case 2:
					warning();
				case 3:
					error();
			}
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
