/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:03:51 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 16:23:31 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int _getInput(void) const;
public:
    PhoneBook();
    ~PhoneBook();
    void addContact(void);
    void listContacts(void) const;
    void inspectContact(void) const;
    void welcomeScreen(void) const;
};

#endif // PHONEBOOK_HPP