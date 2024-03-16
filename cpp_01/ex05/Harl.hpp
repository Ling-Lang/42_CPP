/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:33:45 by jkulka            #+#    #+#             */
/*   Updated: 2024/01/02 13:24:37 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};
typedef void (Harl::*t_mem) (void);
#endif // HARL_HPP