/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:08:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/10 11:09:13 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
    Zombie z2("Test 3");
    z2.announce();
    Zombie *z = newZombie("Test 2");
    z->announce();
    randomChump("Test 1");
    delete(z);
}
