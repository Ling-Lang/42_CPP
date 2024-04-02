/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:34:41 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/12 14:51:20 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
    int                 _fixed_point_value;
    static const int    _bits = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed& c_Fixed);
    Fixed& operator=(const Fixed& c_Fixed);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    /* Operators */
    Fixed operator+(const Fixed& c_Fixed) const;
    Fixed operator-(const Fixed& c_Fixed) const;
    Fixed operator*(const Fixed& c_Fixed) const;
    Fixed operator/(const Fixed& c_Fixed) const;
    
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

    bool operator>(const Fixed& c_Fixed) const;
    bool operator<(const Fixed& c_Fixed) const;
    bool operator>=(const Fixed& c_Fixed) const;
    bool operator<=(const Fixed& c_Fixed) const;
    bool operator==(const Fixed& c_Fixed) const;
    bool operator!=(const Fixed& c_Fixed) const;
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream &res, Fixed const &in);
#endif // FIXED_HPP