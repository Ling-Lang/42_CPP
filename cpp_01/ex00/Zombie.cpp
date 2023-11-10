/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:26:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/10 11:06:37 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << "Destroyed: " << this->_name << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}