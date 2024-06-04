/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:37:15 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/27 12:30:45 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    //TODO if float check for print errors like 42f 42.0f and stuff for more info look subject;
    ScalarConverter::convert("42f");
    // std::cout << "Hello World" << std::endl;   
}