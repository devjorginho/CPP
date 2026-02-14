/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:41:59 by jde-carv          #+#    #+#             */
/*   Updated: 2026/01/24 12:10:58 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		int rawBitsRepresentation;
		static const int fractionalBitsCount = 8;
		
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif