/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:14:10 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/16 17:05:32 by jkulka           ###   ########.fr       */
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
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &c_bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &c_bureaucrat);
    /* Getter */
    std::string getName() const;
    int getGrade() const;
    /* Setter */
    void setName();
    void setGrade();
    /* Grade Functions */
    void incrementGrade();
    void decrementGrade();
};
