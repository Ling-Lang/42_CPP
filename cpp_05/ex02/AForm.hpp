/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:49:44 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/21 12:09:40 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ostream>
#include <string>
#include <string>
#include <iostream>
class Bureaucrat;
class AForm
{
private:
    const std::string _name;
    bool _signed;
    const int _signGrade;
    const int _execGrade;
public:
    /* Constructor and Destructor */
    AForm();
    AForm(std::string name, int signGrade, int execGrade);
    virtual ~AForm();
    AForm(const AForm &c_Form);
    AForm &operator=(const AForm &c_Form);
    virtual void execute(const Bureaucrat &executor) const;
    int getSignGrade() const;
    int getExecGrade() const;
    std::string getName() const;
    bool getSigned() const;
    void beSigned(Bureaucrat *r_Bureaucrat);
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

std::ostream& operator<<(std::ostream &o, const AForm& form);