/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:07:24 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 09:18:46 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	private:
		std::string name;
		
	public:
		Zombie();
		~Zombie();

		std::string getName(void);
		void setName(std::string name);

		void announce( void );
};