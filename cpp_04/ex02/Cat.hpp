/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:00:04 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:07:29 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &c_Cat);
        Cat &operator=(const Cat &c_Cat);
        ~Cat();
        void makeSound() const;       
};

#endif // CAT_HPP