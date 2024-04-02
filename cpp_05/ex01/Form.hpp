/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:49:44 by jkulka            #+#    #+#             */
/*   Updated: 2024/04/02 12:59:42 by jkulka           ###   ########.fr       */
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
    
    int getSignGrade() const;
    int getExecGrade() const;
    std::string getName() const;
    bool getSigned() const;
    void setSigned(bool sign);
    
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