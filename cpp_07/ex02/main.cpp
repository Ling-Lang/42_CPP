/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:29:14 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/06 10:29:54 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
		try {
		Array<double> arr1(100);
		std::cout << "Size of arr1: " << arr1.size() << std::endl;

		Array<int> arr2(5);
		for (size_t i = 0; i < arr2.size(); ++i)
		{
			arr2[i] = i;
		}
		std::cout << "Contents of arr2: ";
		for (size_t i = 0; i < arr2.size(); ++i)
		{
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		Array<int> arr3 = arr2;
		std::cout << "Contents of arr3 (copied from arr2): ";
		for (size_t i = 0; i < arr3.size(); ++i)
		{
			std::cout << arr3[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Trying to access index 10: ";
		try
		{
			std::cout << arr2[10] << std::endl;
		} catch (const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}

	} catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}