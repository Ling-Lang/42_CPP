/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:46:07 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:27:16 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hp;
        int         _ep;
        int         _ap;
        ClapTrap(void);
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &c_ClapTrap);
        ClapTrap &operator=(const ClapTrap &c_ClapTrap);
        ~ClapTrap();
        void attack(const std::string &target);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
};

#endif // CLAPTRAP_HPP