/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:30:56 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/13 14:20:22 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newSed.hpp"


newSed::newSed(std::string infile) : _infile(infile)
{
    this->_outfile = this->_infile + ".replace";
}

newSed::~newSed()
{
    
}

void newSed::replace(std::string to_replace, std::string src)
{
    std::ifstream ifs(this->_infile);
    if(ifs.is_open())
    {
        std::string res;
        if(std::getline(ifs, res, '\0'))
        {
            std::ofstream out(this->_outfile);
            size_t pos = res.find(to_replace);
            while(pos != std::string::npos)
            {
                res.erase(pos, to_replace.length());
                res.insert(pos, src);
                pos = res.find(to_replace);
            }
            out << res;
            out.close();
        }
        else
            std::cerr << "Empty File" << std::endl;
        ifs.close();
    }
    else
    {
        std::cerr << "Can't open file" << std::endl;
        exit(EXIT_FAILURE);
    }
}