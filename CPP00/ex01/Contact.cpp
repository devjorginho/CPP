/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:02:52 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 13:33:22 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( 
	std::string first_name, 
	std::string last_name, 
	std::string nickname, 
	std::string phone_number, 
	std::string darkest_secret)
{
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
		this->phone_number = phone_number;
		this->darkest_secret = darkest_secret;
};

Contact::Contact() {
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
};

Contact::~Contact() {};

void Contact::setFirstName(std::string first_name) {
	this->first_name = first_name;
};

void Contact::setLastName(std::string last_name) {
	this->last_name = last_name;
};

void Contact::setNickName(std::string nickname) {
	this->nickname = nickname;
};

void Contact::setPhoneNumber(std::string phone_number) {
	this->phone_number = phone_number;
};

void Contact::setDarkestSecret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
};


std::string Contact::getFirstName() {
	return (this->first_name);
};

std::string Contact::getLastName() {
	return (this->last_name);
};

std::string Contact::getNickName() {
	return (this->nickname);
};

std::string Contact::getPhoneNumber() {
	return (this->phone_number);
};

std::string Contact::getDarkestSecret() {
	return (this->darkest_secret);
};