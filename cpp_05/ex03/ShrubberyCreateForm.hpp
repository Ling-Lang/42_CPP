/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreateForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:21:27 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/24 13:42:20 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AForm.hpp"
#include <fstream>
class Bureaucrat;
class ShrubberyCreateForm : public AForm
{
private:
    std::string _target;
public:
    ShrubberyCreateForm();
    ShrubberyCreateForm(std::string _target);
    ShrubberyCreateForm(const ShrubberyCreateForm &c_SForm);
    ShrubberyCreateForm &operator=(const ShrubberyCreateForm &c_SForm);
    ~ShrubberyCreateForm();
    void execute(Bureaucrat const & executor) const;
};

