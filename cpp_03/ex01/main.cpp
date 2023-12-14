/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:24:23 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:28:26 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ClapTrap cp("Dylan");
    ScavTrap sp("SDylan");
    std::string target = "Dummy";
    cp.attack(target);
    cp.takeDamage(9);
    sp.attack(target);
    sp.guardGate();
}