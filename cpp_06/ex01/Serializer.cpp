/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:32:11 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 10:43:03 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &c_Serial)
{
    if(this != &c_Serial)
        *this = c_Serial;
}

Serializer &Serializer::operator=(const Serializer &c_Serial)
{
    return *this;
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data* ret = new Data;
    *ret = *reinterpret_cast<Data*>(raw);
    return ret;  
}