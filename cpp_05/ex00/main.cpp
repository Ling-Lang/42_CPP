/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:25:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/19 14:09:13 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Testing Errors on construction" << std::endl;
	std::cout << std::endl << "------------------------------" << std::endl << std::endl;
    try
    {
		std::cout << "Creating bureaucrat with grade 1" << std::endl;
        Bureaucrat a("Bureaucrat Nr. 1", 1);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
	}
	try
    {
		std::cout << "Creating bureaucrat with grade 150" << std::endl;
         Bureaucrat a("Bureaucrat Nr. 1", 150);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
		std::cout << "Creating bureaucrat with grade 151" << std::endl;
        Bureaucrat a("Bureaucrat Nr. 1", 151);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
        try
    {
		std::cout << "Creating bureaucrat with grade 0" << std::endl;
        Bureaucrat a("Bureaucrat Nr. 1", 0);
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << std::endl << "Testing Errors on decrement member functions" << std::endl;
	std::cout << std::endl << "------------------------------" << std::endl << std::endl;
	try
	{
		std::cout << "Creating bureaucrat with grade 150" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 150);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
 	}
	try
	{
		std::cout << "Creating bureaucrat with grade 140" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 140);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
 	}
	try
	{
		std::cout << "Creating bureaucrat with grade 1" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 1);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
 	}
	std::cout << std::endl << "Testing Errors on incremet member functions" << std::endl;
	std::cout << std::endl << "------------------------------" << std::endl << std::endl;
	try
	{
		std::cout << "Creating bureaucrat with grade 1" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 1);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Creating bureaucrat with grade 10" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 10);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Creating bureaucrat with grade 150" << std::endl;
		Bureaucrat a("Bureaucrat Number 1", 150);
		std::cout << a << std::endl << "Decrementing Grade by 1" << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
