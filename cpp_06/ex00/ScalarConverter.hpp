/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:53:05 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/29 13:01:46 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#include <string>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <stdexcept>
class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter &c_Scalar);
    ScalarConverter &operator=(ScalarConverter &c_Scalar);
    ~ScalarConverter();
public:
    static void convert(const std::string & str);
};
