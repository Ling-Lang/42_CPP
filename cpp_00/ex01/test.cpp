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