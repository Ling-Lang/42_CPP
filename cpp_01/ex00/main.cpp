/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:08:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 16:24:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
    Zombie z2("Zombie over constructor");
    z2.announce();
    Zombie *z = newZombie("Zombie over newZombie func");
    z->announce();
    randomChump("Zombie over randomChump");
    delete(z);
}
