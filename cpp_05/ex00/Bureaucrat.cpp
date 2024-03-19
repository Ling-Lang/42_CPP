/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:14:25 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/19 13:59:42 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade = grade;
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
        throw Bureaucrat::GradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade too high");
}

void Bureaucrat::incrementGrade()
{
    if(this->getGrade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->getGrade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat& bureaucrat) {
	o	<< bureaucrat.getName() << ", bureaucrat of grade "
		<< bureaucrat.getGrade();
	return o;
}