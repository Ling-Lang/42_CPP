/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:03:48 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 16:45:13 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
Contact::Contact()
{
}
Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const 
{
    std::string input = "";
    bool        valid = false;
    while(!valid)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else 
        {
            std::cin.clear();
            std::cout << "Invalid input! please try again." << std::endl;
        }
    }
    return (input);
}

void Contact::init(void)
{
    std::cin.ignore();
    this->_first_name = this->_getInput("Please enter the first name: ");
    this->_last_name = this->_getInput("Please enter the last name: ");
    this->_nick_name = this->_getInput("Please enter the nick name: ");
    this->_phone_number = this->_getInput("Please enter the phone number: ");
    this->_darkest_secret = this->_getInput("Please enter the darkest secret: ");
    // std::cout << std::endl;
}
std::string Contact::_printTrunc(std::string str) const
{
    if(str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
void Contact::setIndex(int i)
{
    this->_index = i;
}
void Contact::list(int index) const
{
    if(this->_first_name.empty() || this->_last_name.empty() || this->_nick_name.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printTrunc(this->_first_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printTrunc(this->_last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printTrunc(this->_nick_name) << std::flush;
    std::cout << "|" << std::endl;
}
void Contact::inspect(int index) const
{
        if(this->_first_name.empty() || this->_last_name.empty() || this->_nick_name.empty() || \
         this->_phone_number.empty() || this->_darkest_secret.empty())
        return ;
    std::cout << std::endl;
    std::cout << "=====> " << index <<  " <=====" << std::endl;
    std::cout << this->_first_name << std::endl;
    std::cout << this->_last_name << std::endl;
    std::cout << this->_nick_name << std::endl;
    std::cout << this->_phone_number << std::endl;
    std::cout << this->_darkest_secret << std::endl;
    std::cout << std::endl;
}