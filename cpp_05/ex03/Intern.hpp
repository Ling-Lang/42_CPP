/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:01:00 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 13:31:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreateForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class AForm;
class Intern 
{   
public:
    Intern();
    ~Intern();
    Intern(const Intern &c_Intern);
    Intern &operator=(const Intern &c_Intern);
    AForm *makeForm(std::string _type, std::string _target);
};