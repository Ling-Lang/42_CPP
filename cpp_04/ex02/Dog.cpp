/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:33:19 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:13:58 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Created new [Dog]" << std::endl;
    this->_brain = new Brain();
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
    this->_brain = new Brain(*c_Dog._brain);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destroyed [Dog]" << std::endl;
    delete this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "*woof*" << std::endl;
}