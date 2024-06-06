/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:27:17 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/06 10:29:36 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template <typename T>

class Array
{
private:
	T *_array;
	size_t _size;
public:
	Array() : _array(NULL), _size(0) { std::cout << "Default constructor called" << std::endl;};
	
    ~Array() { delete[] _array; std::cout << "Destructor called" << std::endl; };
    
	Array(unsigned int n) : _array(new T[n]()), _size(n) { std::cout << "Parameterized constructor called" << std::endl; };

	Array(const Array &c_Array) : _array(new T[c_Array._size]()), _size(c_Array._size)
	{
		std::cout << "Copy constructor called" << std::endl;
		for (size_t i = 0; i < _size; i++)
			_array[i] = c_Array._array[i];
	};

	Array &operator=(const Array &c_Array)
	{
		std::cout << "Assignment operator called" << std::endl;
		if (this == &c_Array)
			return *this;
		delete[] _array;
		_array = new T[c_Array._size]();
		_size = c_Array._size;
		for (size_t i = 0; i < _size; i++)
			_array[i] = c_Array._array[i];
		return *this;
	};

	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw std::out_of_range("Index out of the range");
		return _array[i];
	};
	size_t size() const { return _size; };
    
	class OutOfRange : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Index out of the range";
		};
	};

};