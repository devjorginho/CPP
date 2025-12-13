/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 07:08:30 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 07:48:05 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string.h>
#include <cstdlib>

int main() {
    PhoneBook phonebook;
    const char* user = std::getenv("USER"); 
    
    std::cout << "-----WELCOME TO " 
            << "PHONEBOOK" 
            << "-----\n";
    if(user)
        std::cout << "          " << user << std::endl;
    else
        std::cout << "          " << "UNKNOWN\n";
    std::system("clear");
    std::cout << "Loading..."  << std::endl;
    std::system("clear");
    while(1)
    {
        std::cout << "Please write one of the options and press enter: " << std::endl;
        std::cout << "ADD, SEARCH or EXIT\n" << std::endl;
        std::string input;
        
        if (!std::getline(std::cin, input))
            break;
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
    }
    return 0;
}