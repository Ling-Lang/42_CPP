/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:55:29 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/21 15:04:02 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
    std::cout << YELLOW
    << "Tests like in the subject" << DEFAULT
    << std::endl;
    
    const Animal* test = new Animal();
    const Animal* j = new Cat();
    const Animal* i = new Dog();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    j->makeSound(); 
    i->makeSound();
    test->makeSound();
    
    delete test;
    delete j;
    delete i;
    
    std::cout << GREEN
    << "Objects are created with own derived class"
    << DEFAULT << std::endl;
    const Animal* test2 = new Animal();
    const Cat* j2 = new Cat();
    const Dog *i2 = new Dog();

    std::cout << j2->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;
    
    j2->makeSound(); 
    i2->makeSound();
    test2->makeSound();
    
    delete test2;
    delete j2;
    delete i2;

    std::cout << RED
    << "Objects are created with WrongAnimal and WrongCat"
    << DEFAULT << std::endl;
    
    const WrongAnimal* test3 = new WrongAnimal();
    const WrongAnimal* j3 = new WrongCat();

    std::cout << j3->getType() << " " << std::endl;

    j3->makeSound();
    test3->makeSound();

    delete test3;
    delete j3;

    return 0;
}