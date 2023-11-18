/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:34:41 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/18 12:36:15 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
    
public:
    Fixed();
    Fixed(const Fixed& c_Fixed);
    Fixed& operator=(const Fixed& c_Fixed);
    
    
    ~Fixed();
};

#endif // FIXED_HPP