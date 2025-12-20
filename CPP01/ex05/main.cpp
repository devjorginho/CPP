/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:57:04 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/20 18:34:12 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl HarlObject;
	
	HarlObject.complain("DEBUG");
	HarlObject.complain("INFO");
	HarlObject.complain("WARNING");
	HarlObject.complain("ERROR");
	return 0;
}