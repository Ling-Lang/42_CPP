#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
    first_name = "Max";
    last_name = "Mustermann";
    phone_number = "+49 0111 993399";
    darkest_secret = "none";
}
void Contact::set_name(std::string f_name, std::string l_name)
{
    first_name = f_name;
    last_name = l_name;
}
int main()
{
    Contact contact;
    std::string tmp;
    std::cin >> tmp;
    contact.set_name(tmp, tmp);
    std::cout << contact.get_f_name() + " " + contact.get_l_name() << std::endl;
}