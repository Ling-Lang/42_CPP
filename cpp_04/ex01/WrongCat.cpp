/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:43:20 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 14:44:22 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->setType("WrongCat");
    std::cout << "Created new [WrongCat]" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c_WrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = c_WrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &c_WrongCat)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->type = c_WrongCat.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destroyed [WrongCat]" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "*meows wrongly*" << std::endl;
}