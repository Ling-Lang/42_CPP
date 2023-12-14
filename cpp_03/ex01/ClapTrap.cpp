/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:13:50 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 12:58:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ap(0)
{
    std::cout << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c_ClapTrap)
{
    *this = c_ClapTrap;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c_ClapTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = c_ClapTrap._name;
    this->_hp = c_ClapTrap._hp;
    this->_ep = c_ClapTrap._ep;
    this->_ap = c_ClapTrap._ap;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor Called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(_ep > 0)
    {
        _ep--;
        std::cout << "ClapTrap " << _name << " attacks " << target
        << " , causing " << _ap << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_ep > 0)
    {
        _hp += amount;
        _ep--;
        std::cout << "ClapTrap " << _name << " heals by " << amount
            << " it's new amount of hp now is " << _hp << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " of damage"
        << std::endl;
    if(_hp - amount <= 0)
        std::cout << "ClapTrap " << _name << " fell under 0 HP and fainted"
            << std::endl;
    else
    {
        _hp = _hp - amount;
        std::cout << "ClapTrap " << _name << " now has " << _hp << " HP left"
            << std::endl; 
    }
}
