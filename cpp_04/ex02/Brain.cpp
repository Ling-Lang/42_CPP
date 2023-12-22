/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:02:06 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:08:40 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[Brain] created" << std::endl;
}

Brain::Brain(const Brain &c_Brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = c_Brain;
}

Brain &Brain::operator=(const Brain &c_Brain)
{
    std::cout << "Brain copy assignment operator called" << std::endl;

    if(this != &c_Brain)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = c_Brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destroyed [Brain]" << std::endl;
}