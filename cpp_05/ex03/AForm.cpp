/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:30 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 13:44:53 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
// #include "Bureaucrat.hpp"
#include "ShrubberyCreateForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
AForm::AForm(): _name("Generic Form"), _signGrade(10), _execGrade(10), _signed(false)
{
    
}
AForm::AForm(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    if(signGrade <= 0 || execGrade <= 0)
        throw AForm::GradeTooHighException();
    else if(signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();        
    _signed = false;
    std::cout << "Overloaded constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Destructor called" << std::endl;
}

AForm::AForm(const AForm &c_Form) : _name(c_Form._name), _signGrade(c_Form._signGrade), _execGrade(c_Form._execGrade), _signed(c_Form._signed)
{
    *this = c_Form;
    std::cout << "Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &c_Form)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_Form)
    {}
    return *this;
}

int AForm::getSignGrade() const
{
    return this->_signGrade;
}

int AForm::getExecGrade() const
{
    return this->_execGrade;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

void AForm::beSigned(Bureaucrat &r_Bureaucrat)   
{
    if(r_Bureaucrat.getGrade()<= 0)
        throw AForm::GradeTooHighException();
    else if(r_Bureaucrat.getGrade() > 150 || r_Bureaucrat.getGrade() > this->getSignGrade())
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
    std::cout << "Sigining " << *this << std::endl;
    
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

std::ostream& operator<<(std::ostream &o, const AForm &form)
{
    o << form.getName() << ", Form with sign grade " << form.getSignGrade()
        << " and exec grade " << form.getExecGrade() << " sign status "
        << form.getSigned();
    return o;
}

void AForm::execute(const Bureaucrat &executor) const
{
    if(!_signed)
    {
        std::cout << "Cannot execute form is not signed" << std::endl;
        return;
    }
    if(executor.getGrade() > _execGrade)
    {
        std::cout << "Cannot execute form Bureaucrat grade too low" << std::endl;
        return;
    }
    std::cout << "Executed form" << std::endl;
}

AForm *AForm::createForm(std::string _type, std::string _target)
{
    std::string forms[] = {"Shrubbery", "Robotomy", "Presidential"};
    AForm *ret;
    int i = -1;
    while(++i < 3 && forms[i].compare(_type))
        ;
    switch (i)
    {
    case 0:
        ret = new ShrubberyCreateForm(_target);
        break;
    case 1:
        ret = new RobotomyRequestForm(_target);
        break;
    case 2:
        ret = new PresidentialPardonForm(_target);
        break;
    default:
        std::cerr << BOLDRED << "ERROR CANNOT CREATE FORM OF TYPE" << _type << "ABORTING" << RESET
        << std::endl;
        break;
    }
    return ret;
}