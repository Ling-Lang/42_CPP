/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:26:00 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:13:09 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &c_Dog);
        Dog &operator=(const Dog &c_Dog);
        ~Dog();
        void makeSound() const;
};

#endif // DOG_HPP