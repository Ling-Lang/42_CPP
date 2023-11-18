/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:06:54 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/18 12:54:49 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
}
Fixed::Fixed(const Fixed &c_Fixed)
{
    std::cout << "Copy Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor Called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &c_Fixed)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    return *this;
}