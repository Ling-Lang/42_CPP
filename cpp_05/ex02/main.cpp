/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:25:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 09:35:18 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreateForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    try
    {
		std::cout<< BOLDYELLOW << "Creating ShrubberyCreateForm" << RESET << std::endl;
        Bureaucrat Bob("Bob", 10);
		ShrubberyCreateForm form("Tom");
        form.beSigned(&Bob);
        form.execute(Bob);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
        try
    {
		std::cout<< BOLDYELLOW << "Creating RobotomyRequestForm" << RESET << std::endl;
        Bureaucrat Bob("Bob", 10);
		RobotomyRequestForm form("Bob");
        form.beSigned(&Bob);
        form.execute(Bob);
        std::cout << std::endl;

    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
    try
    {
		std::cout<< BOLDYELLOW << "Creating PresidentialPardonForm" << RESET << std::endl;
        Bureaucrat Bob("Bob", 5);
		PresidentialPardonForm form("Bob");
        form.beSigned(&Bob);
        form.execute(Bob);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
    try
    {
		std::cout<< BOLDYELLOW << "Creating PresidentialPardonForm" << RESET << std::endl;
        Bureaucrat Bob("Bob", 5);
		PresidentialPardonForm form("Bob");
        form.beSigned(&Bob);
        Bob.executeForm(form);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
	{
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
	}
}
