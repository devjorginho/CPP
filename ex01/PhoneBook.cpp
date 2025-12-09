/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:03:01 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/09 19:03:02 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : max_contacts(0) {};
PhoneBook::~PhoneBook() {};

void PhoneBook::Add() {
	std::string input;
	int i;
	i = this->max_contacts % 8;

	std::cout << "ADD CONTACT" << std::endl;
	std::cout << "FIRST NAME" << std::endl;
	std::getline(std::cin, input);
	this->contact_manager[i].setFirstName(input);

	std::cout << "LAST NAME" << std::endl;
	std::getline(std::cin, input);
	this->contact_manager[i].setLastName(input);

	std::cout << "NICKNAME" << std::endl;
	std::getline(std::cin, input);
	this->contact_manager[i].setNickName(input);

	std::cout << "PHONE NUMBER" << std::endl;
	std::getline(std::cin, input);
	this->contact_manager[i].setPhoneNumber(input);

	std::cout << "DARKEST SECRET" << std::endl;
	std::getline(std::cin, input);
	this->contact_manager[i].setDarkestSecret(input);

	this->max_contacts++;

	std::cout << "CONTACT ADDED SUCCESSFULLY." << std::endl;
}

std::string PhoneBook::FormatTabble(std::string str) {
	int len;
	len = str.length();
	if(len > 10)
		return str.substr(0,9) + ".";
	return str;
}

void PhoneBook::Search() {
	if(this->max_contacts == 0) {
		std::cout << "There are no users in the database. ";
		std::cout << "Please add one and try again." << std::endl;
		return;
	}
	std::cout << "\n+----------+----------+----------+----------+\n";
    std::cout << "|" << std::setw(10) << "Index" 
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname"
              << "|\n";
    std::cout << "+----------+----------+----------+----------+\n";
	int display_tabble;
	if(this->max_contacts > 8)
		display_tabble = 8;
	else
		display_tabble = this->max_contacts;
	for(int i = 0; i < max_contacts; ++i) {
		std::string firstn = FormatTabble(this->contact_manager[i].getFirstName());
		std::string lastn = FormatTabble(this->contact_manager[i].getLastName());
		std::string nickn = FormatTabble(this->contact_manager[i].getNickName());

		std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << firstn
                  << "|" << std::setw(10) << lastn
                  << "|" << std::setw(10) << nickn
                  << "|\n";
	}
	std::cout << "+----------+----------+----------+----------+\n";
	
	std::cout << "\nSelect the index number to see more info" << std::endl;
	std::string input;
	std::getline(std::cin, input);
	int selection = atoi(input.c_str());
	if(selection < 0 || selection > 8) {
		std::cerr << "Invalid ID";
		return ;
	}
	std::cout << "First name: " << contact_manager[selection].getFirstName() << std::endl;
	std::cout << "Last name: " << contact_manager[selection].getLastName() << std::endl;
	std::cout << "Nickname: " << contact_manager[selection].getNickName() << std::endl;
	std::cout << "PhoneNumber: " << contact_manager[selection].getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << contact_manager[selection].getDarkestSecret() << std::endl;
}

bool PhoneBook::Exit() {
	std::cout << "Turning off the PhoneBook..." << std::endl;
	sleep(1);
	std::cout << "GoodBye !" << std::endl;
	return true;
}
