/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:31 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:32:41 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        ScavTrap(void);

    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
        void attack(std::string const &target);
};

#endif // SCAVTRAP_HPP