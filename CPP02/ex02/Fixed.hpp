/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:13:55 by jde-carv          #+#    #+#             */
/*   Updated: 2026/02/14 11:13:55 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

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
  int getRawBits() const;

  void setRawBits(const int raw);

  float toFloat() const;

  int toInt() const;

  bool operator>(const Fixed &other) const;

  bool operator<(const Fixed &other) const;

  bool operator>=(const Fixed &other) const;

  bool operator<=(const Fixed &other) const;

  bool operator==(const Fixed &other) const;

  bool operator!=(const Fixed &other) const;

  Fixed operator+(const Fixed &other) const;

  Fixed operator-(const Fixed &other) const;

  Fixed operator*(const Fixed &other) const;

  Fixed operator/(const Fixed &other) const;

  Fixed &operator++();

  Fixed operator++(int);

  Fixed &operator--();

  Fixed operator--(int);

  static Fixed &min(Fixed &Fixed1, Fixed &Fixed2);

  static const Fixed &min(const Fixed &Fixed1, const Fixed &Fixed2);

  static Fixed &max(Fixed &Fixed1, Fixed &Fixed2);

  static const Fixed &max(const Fixed &Fixed1, const Fixed &Fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif // EX02_FIXED_HPP
