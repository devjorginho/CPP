/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:31:09 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/09 19:02:58 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string.h>

int main() {
	PhoneBook phonebook;
	const char* user = getenv("USER");
	std::cout << "-----WELCOME TO " 
			<< "PHONEBOOK" 
			<< "-----\n";
	if(user)
		std::cout << "          " << user << std::endl;
	else
		std::cout << "          " << "UNKNOWN\n";
	sleep(1);
	std::system("clear");
	std::cout << "Loading..."  << std::endl;
	sleep(1);
	std::system("clear");
	while(1)
	{
		std::cout << "Please write one of the options and press enter: " << std::endl;
		std::cout << "ADD, SEARCH or EXIT\n" << std::endl;
		std::string input;
		getline(std::cin, input);
		if(input == "ADD") {
			std::system("clear");
			phonebook.Add();
		}
		else if(input == "SEARCH") {
			std::system("clear");
			phonebook.Search();
		}
		else if(input == "EXIT")
		{
			std::system("clear");
			if(phonebook.Exit())
				break;
		}
		else {
			std::cout << "Hey " 
					  << user
			          << ",\nthis is a invalid command, please try again\n\n" << std::endl;
		}
	}
	return 0;
}