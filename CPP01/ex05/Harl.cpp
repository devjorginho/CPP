/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:57:06 by jde-carv          #+#    #+#             */
/*   Updated: 2026/01/03 07:13:21 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <string>

void Harl::debug() {
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger"
			  << ". I really do!"
			  << std::endl;
};

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money."
	          << " You didn’t put enough bacon in my burger! "
			  << "If you did, I wouldn’t be asking for more!"
			  << std::endl;
};

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free."
			  << " I’ve been coming for years,"
			  << " whereas you started working here just last month."
			  << std::endl;
};

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
};

void Harl::complain(std::string level) {
	std::string levelIndex[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	void (Harl::*function_ptr[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	int i = 0;
	while(i < 4){
		if(level == levelIndex[i]) {
			(this->*function_ptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "Stop complaining about trivial things!";
};
