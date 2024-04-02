/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:02:40 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:12:14 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Created new [Cat]" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &c_Cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = c_Cat.getType();
}

Cat &Cat::operator=(const Cat &c_Cat)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->type = c_Cat.type;
    this->_brain = new Brain(*c_Cat._brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destroyed [Cat]" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "*meows*" << std::endl;
}