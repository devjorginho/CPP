/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:54:53 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/20 17:49:38 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>

int main(int ac, char **av) {
	if(ac != 4) {
		std::cerr << "Error: need to be 3 parameters" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	std::string	content;
	std::ifstream inputFile(filename.c_str());
	std::ofstream outputFile((filename + ".replace").c_str());
	size_t index = 0;

	if (!inputFile.is_open() || !outputFile.is_open()) {
    	std::cerr << "Error: opening file" << std::endl;
    	return (1);
	}
	while(std::getline(inputFile, line)) {
		content += line;
		content += '\n';
	}
	inputFile.close();
	while((index = content.find(s1, index)) != std::string::npos) {
		content.erase(index, s1.length());
		content.insert(index, s2);
		index += s2.length();
	}
	outputFile << content;
	outputFile.close();
	return (0);
}

