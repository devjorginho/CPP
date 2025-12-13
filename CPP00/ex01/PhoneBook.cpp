/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:03:01 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 08:12:56 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : max_contacts(0) {};
PhoneBook::~PhoneBook() {};

void PhoneBook::Add() {
    std::string input;
    int i = this->max_contacts % 8;

    Contact temp_contact;

    std::cout << "ADD CONTACT" << std::endl;
    
    std::cout << "FIRST NAME: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setFirstName(input);

    std::cout << "LAST NAME: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setLastName(input);

    std::cout << "NICKNAME: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setNickName(input);

    std::cout << "PHONE NUMBER: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setPhoneNumber(input);

    std::cout << "DARKEST SECRET: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "ERROR: The contact can’t have empty fields. Aborted." << std::endl;
        return ;
    }
    temp_contact.setDarkestSecret(input);
    
    this->contact_manager[i] = temp_contact; 
    this->max_contacts++;
    std::cout << "CONTACT ADDED SUCCESSFULLY to index " << i << "." << std::endl;
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
    for(int i = 0; i < display_tabble; ++i) { 
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
	if (input.length() != 1) {
        std::cerr << "Invalid ID: Index and must be a single digit." << std::endl;
        return ;
    }
    char index_char = input[0];
    if (index_char < '0' || index_char > '9') {
        std::cerr << "Invalid ID: Character entered is not a digit." << std::endl;
        return ;
    }
    int selection = atoi(input.c_str());
    if(selection < 0 || selection >= display_tabble) { 
        std::cerr << "Invalid ID" << std::endl;
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
