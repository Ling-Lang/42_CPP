/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:25:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/21 13:49:10 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	std::cout << "Testing Errors on construction" << std::endl;
	std::cout << std::endl << "------------------------------" << std::endl << std::endl;
    try
    {
		std::cout << "Creating bureaucrat with grade 1" << std::endl;
        Bureaucrat a("Bureaucrat Nr. 1", 1);
		Form FormA();
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
	}
}
