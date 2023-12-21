/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:44:31 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 14:47:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Created new [WrongAnimal]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c_WrongAnimal)
{
    *this = c_WrongAnimal;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c_WrongAnimal)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->type = c_WrongAnimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destroyed [WrongAnimal]" << std::endl;    
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*wrong animal noises*" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}