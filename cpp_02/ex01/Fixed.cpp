/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:54 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/12 14:09:17 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixed_point_value( n << _bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixed_point_value( std::roundf(n * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &c_Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c_Fixed;
}

Fixed &Fixed::operator=(const Fixed &c_Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_Fixed)
        this->_fixed_point_value = c_Fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor Called" << std::endl;
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