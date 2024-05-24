/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:50:31 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 09:06:26 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#pragma once

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string _target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &c_Pform);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &c_Pform);
    void execute(Bureaucrat const & executor) const;
};