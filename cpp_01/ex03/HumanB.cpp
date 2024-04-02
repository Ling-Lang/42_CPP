/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:06:01 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 17:16:34 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;   
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    if(this->_weapon != NULL && this->_weapon->getType() != "")
        std::cout << this->_name << " attacks with their "
            << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack with"
            << std::endl;
}