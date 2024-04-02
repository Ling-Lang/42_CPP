/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:30 by jkulka            #+#    #+#             */
/*   Updated: 2024/04/02 12:57:30 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    _signed = false;
    std::cout << "Default constructor called" << std::endl;
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

void Form::setSigned(bool sign)
{
    this->_signed = sign;
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

