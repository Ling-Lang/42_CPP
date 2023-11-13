/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:38:47 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/13 14:51:25 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
    
}
void Harl::_debug(void)
{
    std::cout << "something something debug..." << std::endl;
}
void Harl::_info(void)
{
    std::cout << "something something info..." << std::endl;
}
void Harl::_warning(void)
{
    std::cout << "something something warning..." << std::endl;
}
void Harl::_error(void)
{
    std::cout << "something something error..." << std::endl;
}

void Harl::complain(std::string level)
{
    t_mem mem[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4 && str[i].compare(level))
        i++;
    if(i < 4)
        (this->*mem[i])();
}