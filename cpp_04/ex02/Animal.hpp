/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:46:22 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:46:37 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
#define DEFAULT "\033[39m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal &c_Animal);
        Animal &operator=(const Animal &c_Animal);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif // ANIMAL_HPP