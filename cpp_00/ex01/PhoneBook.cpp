/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:03:54 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 16:48:08 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{
}

int PhoneBook::_getInput() const
{
    int input = -1;
    bool input_valid = false;
    while(!input_valid)
    {
        std::cout << "Please enter a contact index: ";
        std::cin >> input;
        if(std::cin.good() && (input >= 0 && input <= 8))
            input_valid = true;
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Non numeric or invalid index! Please try again." << std::endl;
        }
    }
    return input;
}
void PhoneBook::addContact(void)
{
    // Index % 8 to prevent adding more than 8 contacts 9 % 8 => 1
    static int index;
    this->_contacts[index % 8].init();
    this->_contacts[index % 8].setIndex(index % 8);
    index++;
}
void PhoneBook::listContacts(void) const
{
    std::cout << "=====> Contact list <=====" << std::endl;
    for(int i = 0; i < 8; i++)
        this->_contacts[i].list(i);
    std::cout << std::endl;
}

void PhoneBook::inspectContact() const
{
    int i = this->_getInput();
    this->_contacts[i].inspect(i);
}

void PhoneBook::welcomeScreen(void) const
{
    // std::string = "Welcome";
    std::cout << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "======Welcome!======" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "=======Usage:=======" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "ADD\t To add a new Contact" << std::endl;
    std::cout << "SEARCH\t To search for a Contact" << std::endl;
    std::cout << "EXIT\t To exit the program :(" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << std::endl;
}