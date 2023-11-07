/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:47:38 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/07 16:28:49 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main (int argc, char **argv)
{
    if(argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        std::exit(0);
    }
    std::string args;
    for(int i = 1; i < argc; i++)
    {
        args += argv[i];
    }
    
    for(size_t i = 0; i < args.length(); i++)
    {
        args.at(i) = std::toupper(args.at(i));
    }
        std::cout << args << std::endl; 
    return 0;
}
