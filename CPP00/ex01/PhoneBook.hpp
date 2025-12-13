/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:03:04 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 07:56:34 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

class PhoneBook {
private:
	Contact contact_manager[8];
	int		max_contacts;
public:
	PhoneBook();
	~PhoneBook();

	void Add();
	void Search();
	bool Exit();
	std::string FormatTabble(std::string);
};

#endif