/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:14:25 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/17 16:23:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &c_bureaucrat)
{
    *this = c_bureaucrat;
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c_bureaucrat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c_bureaucrat)
        this->_grade = c_bureaucrat._grade;
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

void Bureaucrat::setGrade(int grade)
{
    if(grade > 150)
        throw this->GradeTooLowException();
    else if(grade < 1)
        throw this->GradeTooHighException();
    else
        this->_grade = grade;
}

std::string Bureaucrat::GradeTooLowException()
{
    return("Grade too low");
}

std::string Bureaucrat::GradeTooHighException()
{
    return("Grade too high");
}

void Bureaucrat::incrementGrade()
{
    if(this->getGrade() - 1 < 1)
        throw this->GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->getGrade() + 1 > 150)
        throw this->GradeTooLowException();
    this->_grade++;
}