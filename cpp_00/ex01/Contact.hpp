#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact ();
    // Contact ()
    void set_name(std::string, std::string);
    std::string get_f_name() {return first_name;}
    std::string get_l_name() {return last_name;}
};
#endif