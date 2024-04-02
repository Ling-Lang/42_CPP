/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:34:41 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/18 13:51:10 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
    int _fixed_point_value;
    static const int _bits = 8;
    
public:
    Fixed();
    Fixed(const Fixed& c_Fixed);
    Fixed& operator=(const Fixed& c_Fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    ~Fixed();
};

#endif // FIXED_HPP