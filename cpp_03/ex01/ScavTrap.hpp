/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:31 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:26:43 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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