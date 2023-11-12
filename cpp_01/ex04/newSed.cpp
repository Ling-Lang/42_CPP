/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:30:56 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 17:39:51 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newSed.hpp"

#include <iostream>
#include <fstream>
newSed::newSed(std::string infile) : _infile(infile)
{
    this->_outfile = this->_infile + ".replace";
}

newSed::~newSed()
{
    
}

void newSed::replace(std::string to_replace, std::string src)
{

}