/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:35:42 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 14:00:50 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hp = 100;
    this->_ep = 100;
    this->_ap = 30;
    std::cout << "Created FragTrap " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstructed FragTrap " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " high fives everyone" << std::endl;
}