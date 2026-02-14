/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:10:57 by jde-carv          #+#    #+#             */
/*   Updated: 2026/02/14 11:14:51 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>

class Fixed {
private:
  int fpn;
  static const int fractional = 8;

public:
  Fixed(const int nb_integer);

  Fixed(const float nb_float);

  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();
  int getRawBits(void) const;

  void setRawBits(int const raw);

  float toFloat(void) const;

  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif // EX01_FIXED_HPP
