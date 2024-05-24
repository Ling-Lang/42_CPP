/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:42:40 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 13:33:44 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <cstdlib>
class Bureaucrat;
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