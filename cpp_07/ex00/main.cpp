/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:17:20 by jkulka            #+#    #+#             */
/*   Updated: 2024/06/04 12:21:28 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{

int a = 2;
int b = 3;

swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min(a, b) = " << min( a, b ) << std::endl;
std::cout << "max(a, b) = " << max( a, b ) << std::endl;

std::string c = "chaine1";
std::string d = "chaine2";

swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min(c, d) = " << min( c, d ) << std::endl;
std::cout << "max(c, d) = " << max( c, d ) << std::endl;
return 0;

}