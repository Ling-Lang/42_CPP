/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:54 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/13 12:45:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_value = 0;
}
Fixed::Fixed(const Fixed &c_Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(c_Fixed.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &c_Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_Fixed)
        this->_fixed_point_value = this->getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor Called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point_value;
}

void Fixed::setRawBits(int raw)
{
    this->_fixed_point_value = raw;
}