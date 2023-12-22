/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:16:56 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 13:27:22 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
    std::cout << "Created AMateria" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "Created AMateria of type " << type << std::endl;
}

AMateria::AMateria(const AMateria &c_AMateria)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = c_AMateria;
}

AMateria::~AMateria()
{
    std::cout << "Destroyed AMateria" << std::endl;   
}

std::string const& AMateria::getType() const
{
    return this->_type;
}

AMateria *AMateria::clone() const
{
    return(AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an " << this->_type << " at " << target.getName() << " *" << std::endl;
}