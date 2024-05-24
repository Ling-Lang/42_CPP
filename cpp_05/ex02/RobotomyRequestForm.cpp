/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:44:47 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 09:36:43 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45) 
{
    std::cout << "Created RobotomyRequestForm using default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45), _target(_target)
{
    std::cout << "Created RobotomyRequestForm using default constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c_RForm)
{
    if(this != &c_RForm)
    {
        *this = c_RForm;
    }
    std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c_SForm)
{
    std::cout << "Copy assignment operator for RobotomyRequestForm called" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    AForm::execute(executor);
    if(executor.getGrade() > getExecGrade() || !getSigned())
        throw AForm::GradeTooLowException();
    srand(unsigned(time(NULL)));
    int randomnbr = rand() % 2;
    if(randomnbr)
        std::cout << BOLDCYAN << this->_target << " has been robotomized succesfully 50% of the time" << RESET << std::endl;
    else
        std::cout << BOLDCYAN << "Robotomizing " << this->_target << " failed" << RESET << std::endl;
}