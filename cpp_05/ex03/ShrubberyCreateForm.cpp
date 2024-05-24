/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreateForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:25:12 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 09:37:11 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreateForm.hpp"

ShrubberyCreateForm::ShrubberyCreateForm(/* args */): AForm("ShrubberyCreateForm", 145, 137)
{
    std::cout << "Created Shrubbery Create Form using default constructor" << std::endl;
}

ShrubberyCreateForm::ShrubberyCreateForm(std::string _target): AForm("ShrubberyCreateForm", 145, 137), _target(_target)
{
    std::cout << "Created Shrubbery Create Form using default constructor" << std::endl;
}
ShrubberyCreateForm::~ShrubberyCreateForm()
{
    std::cout << "Called destructor for ShrubberyCreateForm" << std::endl;
}

ShrubberyCreateForm::ShrubberyCreateForm(const ShrubberyCreateForm &c_SForm)
{
    if(this != &c_SForm)
    {
        *this = c_SForm;
    }
    std::cout << "Copy constructor for ShrubbberyCreateForm called" << std::endl;
}

ShrubberyCreateForm &ShrubberyCreateForm::operator=(const ShrubberyCreateForm &c_SForm)
{
    std::cout << "Copy assignment operator for ShrubberyCreateForm called" << std::endl;
    return *this;
}

void ShrubberyCreateForm::execute(Bureaucrat const & execute) const
{
    AForm::execute(execute);
    if(execute.getGrade() > getExecGrade() || !getSigned())
        throw AForm::GradeTooLowException();
    std::string tmp = _target.c_str();
    std::string filename = tmp.append("_shrubbery");
    std::ofstream outfile(filename);
    if(!outfile.is_open())
    {
        std::cerr << "Could not open file" << std::endl;
        return;
    }
    outfile << "  ^   " << "\n" << " /|\\ " << "\n" << "/ | \\ " << "\n" << " /|\\ "<< "\n" << "/ | \\ " << "\n" << "  |\n  |" << std::endl;
    outfile.close();
    std::cout << BOLDCYAN << "Executed ShrubberyCreateForm" << RESET << std::endl;
}

