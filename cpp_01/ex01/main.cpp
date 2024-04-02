/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:08:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 16:25:22 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
    Zombie *horde =  zombieHorde(4, "zombieHorde");
    for(int i  = 0; i < 4; i++)
    {
        horde[i].announce();
    }
    delete[] horde;

}
