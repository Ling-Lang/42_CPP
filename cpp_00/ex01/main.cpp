/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:03:54 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 19:29:26 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    std::string input = "";
    pb.welcomeScreen();
    while(input.compare("EXIT"))
    {
        if(input.compare("ADD") == 0)
        pb.addContact();
        else if(input.compare("SEARCH") == 0)
        {
            pb.listContacts();
            pb.inspectContact();
        }
        std::cout << ">> " << std::flush;
        std::cin >> input;
    }
    return 0;
}