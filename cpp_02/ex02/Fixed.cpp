/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:54 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/12 14:55:21 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed_point_value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixed_point_value( n << _bits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixed_point_value( std::roundf(n * (1 << _bits)))
{
    // std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &c_Fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = c_Fixed;
}

Fixed &Fixed::operator=(const Fixed &c_Fixed)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_Fixed)
        this->_fixed_point_value = c_Fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Deconstructor Called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}


float Fixed::toFloat(void) const
{
    return static_cast<float>(this->getRawBits()) / (1 << _bits);
}

int Fixed::toInt(void) const
{
    return this->_fixed_point_value >> _bits;
}


std::ostream & operator<<(std::ostream &res, Fixed const &in)
{
    res << in.toFloat();
    return res;
}

Fixed Fixed::operator+(const Fixed& c_Fixed) const
{
    return Fixed(this->toFloat() + c_Fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& c_Fixed) const
{
    return Fixed(this->toFloat() - c_Fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& c_Fixed) const
{
    return Fixed(this->toFloat() * c_Fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& c_Fixed) const
{
    return Fixed(this->toFloat() / c_Fixed.toFloat());
}

Fixed& Fixed::operator++(void)
{
    ++this->_fixed_point_value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp._fixed_point_value = this->_fixed_point_value++;
    return tmp;
}
Fixed& Fixed::operator--(void)
{
    --this->_fixed_point_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    tmp._fixed_point_value = this->_fixed_point_value++;
    return tmp;
}

bool Fixed::operator>(const Fixed& c_Fixed) const
{
    return this->getRawBits() > c_Fixed.getRawBits();
}

bool Fixed::operator<(const Fixed& c_Fixed) const
{
    return this->getRawBits() < c_Fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed& c_Fixed) const
{
    return this->getRawBits() >= c_Fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed& c_Fixed) const
{
    return this->getRawBits() <= c_Fixed.getRawBits();
}

bool Fixed::operator==(const Fixed& c_Fixed) const
{
    return this->getRawBits() == c_Fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& c_Fixed) const
{
    return this->getRawBits() != c_Fixed.getRawBits();
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}
