/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:33:19 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 15:07:48 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    // this->setType("Dog");
    this->type = "Dog";
    std::cout << "Created new [Dog]" << std::endl;
}

Dog::Dog(const Dog &c_Dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = c_Dog.getType();
}

Dog &Dog::operator=(const Dog &c_Dog)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = c_Dog.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destroyed [Dog]" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "*woof*" << std::endl;
}