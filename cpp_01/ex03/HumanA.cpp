/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:54:42 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 17:16:32 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{
    
}
void HumanA::attack()
{
    if(this->_weapon.getType() != "")
        std::cout << this->_name << " attacks with their "
            << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack with"
            << std::endl;
}