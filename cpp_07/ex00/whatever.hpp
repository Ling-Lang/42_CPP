/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:57:29 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 12:21:05 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
    return a < b ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
    return a > b ? a : b;
}

template <typename T>
bool operator == (T const &a, T const &b)
{
    return a == b;
}

template <typename T>
bool operator != (T const &a, T const &b)
{
    return a != b;
}

template <typename T>
bool operator >= (T const &a, T const &b)
{
    return a >= b;
}

template <typename T>
bool operator <= (T const &a, T const &b)
{
    return a <= b;
}