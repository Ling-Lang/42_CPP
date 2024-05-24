/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:42:40 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/23 12:56:01 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#pragma once

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string _target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &c_RForm);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &c_RForm);
    void execute(Bureaucrat const & executor) const;
};