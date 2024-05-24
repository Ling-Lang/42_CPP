/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:53:41 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 09:36:04 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "Created PresidentialPardonForm using defautl constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm", 25, 5), _target(_target)
{
    std::cout << "Created PresidentialPardonForm using defautl constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructed PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c_PForm)
{
    if(this != &c_PForm)
        *this = c_PForm;
    std::cout << "Copy constructer for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c_PForm)
{
    std::cout << "Copy assignment operator for PresidentialPardonForm called" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    AForm::execute(executor);
    if(executor.getGrade() > getExecGrade() || !getSigned())
        throw AForm::GradeTooLowException();
    std::cout << BOLDCYAN << this->_target << " has been pardoned by Zaphod Beeblebrox" << RESET <<std::endl;
}