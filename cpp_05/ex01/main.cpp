/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:25:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/21 12:16:44 by jkulka           ###   ########.fr       */
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
		std::cout<< BOLDYELLOW << "Creating Form with signing grade 1" << RESET << std::endl;
		AForm FormA("Test", 1, 1);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with signing grade 150" << RESET << std::endl;
		AForm FormA("Test", 150, 1);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with signing grade 0" << RESET << std::endl;
		AForm FormA("Test", 0, 1);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with signing grade 151" << RESET << std::endl;
		AForm FormA("Test", 151, 1);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
    std::cout << std::endl;
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with exec grade 1" << RESET << std::endl;
		AForm FormA("Test", 1, 1);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with exec grade 150" << RESET << std::endl;
		AForm FormA("Test", 1, 150);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with exec grade 0" << RESET << std::endl;
		AForm FormA("Test", 1, 0);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating Form with exec grade 151" << RESET << std::endl;
		AForm FormA("Test", 1, 151);
        std::cout << FormA << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Signing form too low using Bureaucrat.signForm" << RESET << std::endl;
		AForm FormA("Test", 1, 10);
        Bureaucrat Bob("Bob", 10);
        std::cout << FormA << std::endl;
        Bob.signForm(FormA);
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
            try
    {
		std::cout<< BOLDYELLOW << "Signing form too low using Form.beSigned" << RESET << std::endl;
		AForm FormA("Test", 1, 10);
        Bureaucrat Bob("Bob", 10);
        std::cout << FormA << std::endl;
        FormA.beSigned(&Bob);
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
                try
    {
		std::cout<< BOLDYELLOW << "Signing form too low using Form.beSigned" << RESET << std::endl;
		AForm FormA("Test", 1, 1);
        Bureaucrat Bob("Bob", 1);
        std::cout << FormA << std::endl;
        FormA.beSigned(&Bob);
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
}
