/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:31:21 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 16:38:48 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    
    /* Traditional pointer like in C. Possible to sperate declaration and value assignement*/
    std::string *stringPTR;
    stringPTR = &str;
    
    /* New Reference unlike pointer not possible to sperate declaration and assignement can't reassign value */
    std::string &stringREF = str;
    
    std::cout << "str address:\t\t" << &str << std::endl;
    std::cout << "stringPTR address:\t" << stringPTR << std::endl;
    std::cout << "stringREF address:\t" << &stringREF << std::endl;
    
    std::cout << "str value:\t\t" << str << std::endl;
    std::cout << "stringPTR value:\t" << *stringPTR << std::endl;
    std::cout << "stringREF value:\t" << stringREF << std::endl;
    
}