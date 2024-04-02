/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:02:40 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 15:07:10 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Created new [Cat]" << std::endl;
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
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destroyed [Cat]" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "*meows*" << std::endl;
}