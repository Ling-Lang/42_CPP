/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:42:25 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 14:43:46 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>
class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &c_WrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &c_WrongAnimal);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
        void setType(std::string type);
};

#endif // WRONGANIMAL_HPP