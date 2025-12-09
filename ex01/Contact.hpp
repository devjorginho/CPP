/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:02:54 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/09 19:02:55 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#	define CONTACT_HPP

#include <iostream>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:

	Contact();

	Contact( 
	std::string first_name, 
	std::string last_name, 
	std::string nickname, 
	std::string phone_number, 
	std::string darkest_secret);

	~Contact();

	void setFirstName(std::string first_name);
	void setLastName(std::string last_name);
	void setNickName(std::string nickname);
	void setPhoneNumber(std::string phone_number);
	void setDarkestSecret(std::string darkest_secret);

	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);
};

#endif