/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:28:45 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/12 17:38:15 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWSED_HPP
#define NEWSED_HPP

#include <iostream>
class newSed
{
private:
    std::string _infile;
    std::string _outfile;
public:
    newSed(std::string infile);
    ~newSed();
    void replace(std::string to_replace, std::string src);
};

#endif // NEWSED_HPP