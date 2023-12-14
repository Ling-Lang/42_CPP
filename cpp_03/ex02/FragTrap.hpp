/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:32:28 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/14 13:34:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        FragTrap(void);
    public:
        FragTrap(std:: string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP