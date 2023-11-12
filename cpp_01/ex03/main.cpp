/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:59:13 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 17:18:40 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA humanA("HumanA", club);
        humanA.attack();
        club.setType("some other type of club");
        humanA.attack();
    }
    std::cout << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanB humanB("HumanB");
        humanB.setWeapon(club);
        humanB.attack();
        club.setType("some other type of club");
        humanB.attack();
    }

    return 0;
}