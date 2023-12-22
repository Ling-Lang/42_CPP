/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:55:29 by jkulka            #+#    #+#             */
/*   Updated: 2023/12/22 12:43:28 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "Animal.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// int main()
// {
//     std::cout << YELLOW
//     << "Tests like in the subject" << DEFAULT
//     << std::endl;
    
//     const Animal* test = new Animal();
//     const Animal* j = new Cat();
//     const Animal* i = new Dog();
    
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
    
//     j->makeSound(); 
//     i->makeSound();
//     test->makeSound();
    
//     delete test;
//     delete j;
//     delete i;
    
//     std::cout << GREEN
//     << "Objects are created with own derived class"
//     << DEFAULT << std::endl;
//     const Animal* test2 = new Animal();
//     const Cat* j2 = new Cat();
//     const Dog *i2 = new Dog();

//     std::cout << j2->getType() << " " << std::endl;
//     std::cout << i2->getType() << " " << std::endl;
    
//     j2->makeSound(); 
//     i2->makeSound();
//     test2->makeSound();
    
//     delete test2;
//     delete j2;
//     delete i2;

//     std::cout << RED
//     << "Objects are created with WrongAnimal and WrongCat"
//     << DEFAULT << std::endl;
    
//     const WrongAnimal* test3 = new WrongAnimal();
//     const WrongAnimal* j3 = new WrongCat();

//     std::cout << j3->getType() << " " << std::endl;

//     j3->makeSound();
//     test3->makeSound();

//     delete test3;
//     delete j3;
    
//     std::cout << GREEN
//     << "Test for leaks"
//     << DEFAULT << std::endl;
    
//     const Animal* j4 = new Dog();
//     const Animal* i4 = new Cat();
    
//     delete j4;
//     delete i4;
    
//     std::cout << GREEN
//     << "Tests with Animal array"
//     << DEFAULT << std::endl;
    
//     const Animal* test4[4] =  { new Dog(), new Dog(), new Cat(), new Cat()};
//     for (int i = 0; i < 4; i++)
//         delete test4[i];
    
//     Animal a;
//     // system("leaks polymorphism");
//     return 0;
// }
#include <iomanip>

int	main(void)
{
	srand((unsigned int)time(NULL));
	Cat	cat;
	Dog	dog;
	// Animal	animal;

	return (0);
}