/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:30 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/19 16:09:18 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _signGrade;
    const int _execGrade;
public:
    /* Constructor and Destructor */
    Form(std::string name, int signGrade, int execGrade);
    ~Form();
    Form(const Form &c_Form);
    Form &operator=(const Form &c_Form);
    
    
    /* Exceptions */
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream &o, const Form& form);