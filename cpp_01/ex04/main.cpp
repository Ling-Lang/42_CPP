/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:20:37 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/13 14:22:33 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newSed.hpp"

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cerr << "syntax error" << std::endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        newSed sed(argv[1]);
        sed.replace(argv[2], argv[3]);
    }
    exit(EXIT_SUCCESS);
}