/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:57:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/05 12:21:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*f)(T const &input))
{
    if (!array || !f || size == 0)
        return;
    for(size_t i = 0; i < size; i++)
        f(array[i]);
}

template <typename T>
void print(T const &input)
{
    std::cout << input << std::endl;    
}