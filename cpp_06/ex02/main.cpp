/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:08:00 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 11:33:27 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    int random = rand() % 3;
    switch (random)
    {
    case 0:
        std::cout << "Generated class of type A" << std::endl;
        return  new A();
        break;
    case 1:
        std::cout << "Generated class of type B" << std::endl;
        return  new B();
        break;
    case 2:
        std::cout << "Generated class of type C" << std::endl;
        return  new C();
        break;
    default:
        break;
    }
    return NULL;
}

void identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A was succesfully casted" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B was succesfully casted" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C was succesfully casted" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
		std::cout << "A found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "A not identified" << '\n';
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "B not identified" << '\n';
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "C not identified" << '\n';
    }
}

int main()
{
    std::cout << "Generating 10 random classes and identifying them" << std::endl;
    for(int i = 1; i <= 10; i++)
	{
        std::cout << std::endl << "Test case " << i << std::endl;
		Base *base;
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return 0;
}