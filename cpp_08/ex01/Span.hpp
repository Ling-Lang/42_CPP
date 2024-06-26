/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:25:10 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/26 19:25:24 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#include <limits>
#include <list>
#include <vector>

class Span
{
    private:
        unsigned int _n;
        std::list<unsigned int> completeList;

    public:
        Span();
        ~Span();
        Span(const unsigned int &nbr);
        Span(const Span &other);
        Span &operator=(const Span &other);

    void addNumber(const unsigned int &newNbr);
    void displayList() const;
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end)
    {
    while (begin != end)
    {
        addNumber(*begin);
        ++begin;
    }
}

};

std::ostream &operator<<(std::ostream &out, const Span &span);