/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:30:33 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/26 19:32:07 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack() : std::stack<T>() {std::cout << "Default Constructor called" << std::endl;}
    ~MutantStack() {std::cout << "Destructor called" << std::endl;}
    MutantStack(const MutantStack &other) : std::stack<T>(other) {std::cout << "Copy Constructor called" << std::endl;}
    MutantStack &operator = (const MutantStack &other)
    {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }
    
    typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
    {
		return (std::stack<T>::c.begin());
	};
	iterator end(void)
    {
		return (std::stack<T>::c.end());
	};
};