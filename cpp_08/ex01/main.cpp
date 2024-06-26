/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:27:27 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/26 19:28:40 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    

    //Test 2 with Vector;
    Span sp2 = Span(10000);
    std::vector<int> v(10000, 0);
    for (int i = 0; i < 10000; i++)
    {
        v[i] = i;
    }
    sp2.addNumbers(v.begin(), v.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    Span sp3(10);
    try
    {
        sp3.addNumber(1);
        sp3.addNumber(2);
        sp3.addNumber(3);
        sp3.addNumber(4);
        sp3.addNumber(5);
        sp3.addNumber(6);
        sp3.addNumber(7);
        sp3.addNumber(8);
        sp3.addNumber(9);
        sp3.addNumber(10);
        sp3.addNumber(11);
        sp3.displayList();
            
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}