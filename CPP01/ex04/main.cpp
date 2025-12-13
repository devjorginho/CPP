/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:54:53 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 15:49:15 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


//ifstream
//ofstream

int main(int ac, char **av) {
	if(ac != 4)
	{
		std::cerr << "Error: need to be 3 parameters" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;

	std::ifstream inFile{filename};
}