/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:24:23 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:43:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ClapTrap cp("Dylan");
    ScavTrap sp("SDylan");
    FragTrap fp("FDylan");
    std::string target = "Dummy";
    cp.attack(target);
    cp.takeDamage(9);
    sp.attack(target);
    sp.guardGate();
    fp.highFivesGuys();
}