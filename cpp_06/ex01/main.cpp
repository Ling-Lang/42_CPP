/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:47 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 11:00:38 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* data = new Data();
	data->_id = 1;
	data->value = 42.0f;

	uintptr_t serializedData = Serializer::serialize(data);
	Data* deserializedData = Serializer::deserialize(serializedData);
	if (deserializedData->_id == data->_id && deserializedData->value == data->value)
	{
		std::cout << "Test completed succesfully" << std::endl;
		std::cout << "Data id: " << deserializedData->_id << std::endl;
		std::cout << "Data value: " << deserializedData->value << std::endl;
	}
	else
		std::cout << "Test failed!" << std::endl;
	delete data;
	delete deserializedData;
	return 0;
}