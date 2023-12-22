/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:48:43 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:43:45 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Created new [Animal]" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &c_Animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    type = c_Animal.getType();
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Created new [Animal] of type " << type << std::endl;
}
Animal &Animal::operator=(const Animal &c_Animal)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destroyed [Animal]" << std::endl;    
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "*animal noises*" << std::endl;
}
