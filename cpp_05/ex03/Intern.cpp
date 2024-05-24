/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:01:03 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 13:21:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Created Intern" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Destructed Intern" << std::endl;
}

Intern::Intern(const Intern &c_Intern)
{
    if(this != &c_Intern)
        *this = c_Intern;
    std::cout << "Created Intern through Copy constructor" << std::endl;
}

Intern &Intern::operator=(const Intern &c_Intern)
{
    std::cout << "Created Intern using Copy assignment constructor" << std::endl;
    return *this;
}

AForm *Intern::makeForm(std::string _type, std::string _target)
{
    AForm *ret;
    ret = AForm::createForm(_type, _target);
    if(!ret)
        std::cerr << BOLDRED << "ERROR CAN'T CREATE FORM OF TYPE " << _type << " ABORTING" << RESET
        << std::endl;
    else
        std::cout << BOLDCYAN << "Created Form of type " << _type << " with target " << _target
        << std::endl;
    return ret;
}