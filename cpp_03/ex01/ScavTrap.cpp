/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:52:41 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:25:37 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hp = 100;
    this->_ep = 50;
    this->_ap = 20;

    std::cout << "Created ScavTrap " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstructed ScavTrap " << this->_name << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " entered GateKeeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{

    if(_ep > 0)
    {
        _ep--;
        std::cout << "ScavTrap " << _name << " attacks " << target
        << " , causing " << _ap << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
}