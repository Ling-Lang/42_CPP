/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:00 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 14:46:03 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &c_Dog);
        Dog &operator=(const Dog &c_Dog);
        ~Dog();
        void makeSound() const;
};

#endif // DOG_HPP