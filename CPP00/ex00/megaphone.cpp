/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:02:48 by jde-carv          #+#    #+#             */
/*   Updated: 2025/12/13 06:54:17 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int	j;
	
	i = 1;
	if(ac != 1)
	{
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			if(av[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << "\n";
		return 0;
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (1);
}