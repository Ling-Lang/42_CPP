/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:53:05 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/27 12:31:34 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter();
public:
    static void convert(const std::string & str);
};
