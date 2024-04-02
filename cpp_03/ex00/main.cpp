/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:24:23 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 12:45:25 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap cp("Dylan");
    ClapTrap cp2("Help");
    std::string target = "Dummy";
    cp.attack(target);
    cp.takeDamage(9);
    cp.beRepaired(9);
    cp2.takeDamage(10);
}