/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:33:17 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/13 15:28:16 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string input;
    
    while(input.compare("stop"))
    {

        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
        
    }
    exit(EXIT_SUCCESS);
}