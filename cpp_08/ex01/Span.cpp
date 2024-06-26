/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:25:34 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/26 19:27:17 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span ()
{
    std::cout << "Default Constructor called" << std::endl;
}

Span::~Span()
{
    std::cout << "Default Constructor called" << std::endl;
}

Span::Span(const Span &other)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_n = other._n; // this is the explicit copy of the constructor
}

Span &Span ::operator=(const Span &other)
{    
    if (this != &other)
    {
        this->_n = other._n;
        std::cout << "Assignment Operator called" << std::endl;
    }
    return *this;    
    
}

Span::Span(const unsigned int &nbr)
{
    this->_n = nbr;
    std::cout << "Parameter Operator called" << std::endl;
}

void Span::addNumber(const unsigned int &newNbr)
{
    if (completeList.size() < _n) 
        completeList.push_back(newNbr);
    else 
        throw std::runtime_error("Error: Cannot add more numbers, list is full.");
}

void Span::displayList() const
{
    for (std::list<unsigned int>::const_iterator it = completeList.begin(); it != completeList.end(); it++)
    {
            unsigned int nbrToPrint = *it;
            std::cout << nbrToPrint << std::endl;       
    }
}

unsigned int Span::shortestSpan() const
{
    if (completeList.size() < 2)
        throw std::runtime_error("Error: Cannot calculate the shortest span, list is too short.");
    std::list<unsigned int> sortedList = completeList;
    sortedList.sort();
    unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
    for (std::list<unsigned int>::const_iterator it = sortedList.begin(); it != sortedList.end(); it++)
    {
        unsigned int currentNbr = *it;
        std::list<unsigned int>::const_iterator nextIt = it;
        nextIt++;

        if (nextIt != sortedList.end())
        {
            unsigned int nextNbr = *nextIt;
            unsigned int currentSpan = nextNbr - currentNbr;
            if (currentSpan < shortestSpan)
            {
                shortestSpan = currentSpan;
            }
        }
    }
    
    return shortestSpan;
}

unsigned int Span::longestSpan() const
{
    if (completeList.size() < 2)
        throw std::runtime_error("Error: list is too short.");
    std::list<unsigned int> sortedList = completeList;
    
    sortedList.sort();
    unsigned int smallest = sortedList.front();
    unsigned int largest = sortedList.back();
    unsigned int longestSpan = largest - smallest;
    return longestSpan;
}


std::ostream &operator<<(std::ostream &out, const Span &span)
{
    out << span;
    return out;
}

// template <typename InputIterator>
// void Span::addNumbers(InputIterator begin, InputIterator end)
// {
//     while (begin != end)
//     {
//         addNumber(*begin);
//         ++begin;
//     }
// }
