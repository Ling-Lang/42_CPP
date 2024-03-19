/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:14:10 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/19 14:25:47 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    /* Constructor and Destructor */
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &c_bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &c_bureaucrat);
    /* Getter */
    std::string getName() const;
    int getGrade() const;
    /* Setter */
    void setGrade(int grade);
    /* Grade Functions */
    void incrementGrade();
    void decrementGrade();
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
std::ostream&	operator<<(std::ostream &o, const Bureaucrat& bureaucrat);
