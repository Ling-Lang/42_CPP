/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:30 by jkulka            #+#    #+#             */
/*   Updated: 2024/04/10 13:43:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form(): _name("Generic Form"), _signGrade(10), _execGrade(10), _signed(false)
{
    
}
Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    if(signGrade <= 0 || execGrade <= 0)
        throw Form::GradeTooHighException();
    else if(signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();        
    _signed = false;
    std::cout << "Overloaded constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

Form::Form(const Form &c_Form) : _name(c_Form._name), _signGrade(c_Form._signGrade), _execGrade(c_Form._execGrade), _signed(c_Form._signed)
{
    *this = c_Form;
    std::cout << "Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &c_Form)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_Form)
    {}
    return *this;
}

int Form::getSignGrade() const
{
    return this->_signGrade;
}

int Form::getExecGrade() const
{
    return this->_execGrade;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

void Form::beSigned(Bureaucrat *r_Bureaucrat)   
{
    if(r_Bureaucrat->getGrade()<= 0)
        throw Form::GradeTooHighException();
    else if(r_Bureaucrat->getGrade() > 150 || r_Bureaucrat->getGrade() > this->getSignGrade())
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
    std::cout << "Sigining " << *this << std::endl;
    
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

std::ostream& operator<<(std::ostream &o, const Form &form)
{
    o << form.getName() << ", Form with sign grade " << form.getSignGrade()
        << " and exec grade " << form.getExecGrade() << " sign status "
        << form.getSigned();
    return o;
}