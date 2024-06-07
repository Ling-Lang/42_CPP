/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:33:19 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/06 10:34:25 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;
    int result;
    for (int i=1; i<=10; i++)
        numbers.push_back(i);
    try 
    {
        result = easyfind(numbers, 3);
        std::cout << "\nThe number " << result << " is in the vector\n" << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout << "\nThe number is not in the vector\n" << std::endl;
    }
    try 
    {
        result = easyfind(numbers, 10);
        std::cout << "\nThe number " << result << " is in the vector\n" << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout << "\nThe number is not in the vector\n" << std::endl;
    }
    try 
    {
        result = easyfind(numbers, 11);
        std::cout <<  "\nThe number " << result << " is in the vector\n" << std::endl;
    } 
    catch (std::exception &e) 
    {
        std::cout << "\nThe number 11 is not in the vector\n" << std::endl;
    }
    return 0;
}