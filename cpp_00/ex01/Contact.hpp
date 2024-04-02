/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:03:52 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 16:24:20 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <iomanip>
class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
    int _index;
    std::string _getInput(std::string prompt) const;
    std::string _printTrunc(std::string str) const;
public:
    Contact ();
    ~Contact ();
    void init(void);
    void list(int index) const;
    void inspect(int index) const;
    void setIndex(int i);
};
#endif //CONTACT_HPP