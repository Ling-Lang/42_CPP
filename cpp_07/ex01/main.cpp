/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:17:20 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/06 10:25:23 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	iter(tab, 5, print);
    std::cout << std::endl;
    
	float tab2[] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f};
	iter(tab2, 5, print);
    std::cout << std::endl;

	std::string tab3[] = {"Moin", "Test", "Eins", "Hello", "World"};
	iter(tab3, 5, print);
    std::cout << std::endl;

	double tab4[] = {0.0123456, 1.1123456, 2.223456, 3.3456789, 4.456789};
	iter(tab4, 5, print);
	return 0;
}