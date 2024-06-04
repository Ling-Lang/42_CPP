/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:31:54 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 10:59:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
#include <iostream>
#include <string>

typedef struct s_data
{
    int _id;
    float value;
} Data;

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &c_Serial);
    Serializer &operator=(const Serializer &c_Serial);
    ~Serializer();
public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
};