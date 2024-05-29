/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:53:10 by jkulka            #+#    #+#             */
/*   Updated: 2024/05/29 13:07:35 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

bool str_isprint(std::string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(!isprint(str[i]))
            return false;
    }
    return true;
}

bool str_isnum(std::string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(!isdigit(str[i]))
            return false;
    }
    return true;
}

bool str_isalpha(std::string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(!isalpha(str[i]))
            return false;
    }
    return true;
}

float convertToFloat(const std::string &str)
{
    std::string tmp = str;
    if(!tmp.empty() && tmp[tmp.length() - 1] == 'f')
        tmp = tmp.substr(0, tmp.length() - 1);
    std::istringstream stream(tmp);
    float ret;
    stream >> ret;
    if(stream.fail() ||!stream.eof())
        throw std::exception();
    return ret;
}

double convertToDouble(const std::string &str)
{
    std::string tmp = str;
    if(!tmp.empty() && tmp[tmp.length() - 1] == 'f')
        tmp = tmp.substr(0, tmp.length() - 1);
    std::istringstream stream(tmp);
    double ret;
    stream >> ret;
    if(stream.fail() ||!stream.eof())
        throw std::exception();
    return ret;
}

void ScalarConverter::convert(const std::string &str)
{
    if(str.empty())
    {
        std::cout << "String is empty" << std::endl;
        return;
    }
    if (str == "nan" || str == "-inf" || str == "+inf")
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;

	else if (str == "-inff" || str == "+inff" || str == "nanf")
		std::cout << "char: impossible\nint: impossible\nfloat: " << str << "\ndouble: " << str.substr(0, str.size() - 1) << std::endl;
    else
    {
        try
        {
            if(str.size() && str_isprint(str))
            {
                /*
                * We check if the string is a number if yes we can assume that it is a ASCII value
                * which we convert to an int so that we can typecast it back to the corresponding ASCII char 
                */
                if(str_isnum(str))
                {
                    int asciinbr = atoi(str.c_str());
                    std::cout << "char: '" << static_cast<char>(asciinbr) << "'" << std::endl;
                }                    
                else if(str_isalpha(str))
                    std::cout << "char: '" << str << "'" << std::endl;
                else
                    std::cout << "char: Non printable" << std::endl;
            }
            else
                std::cout << "char: Non printable" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            float fvalue = convertToFloat(str);
            std::cout << "int: " << static_cast<int>(fvalue) << std::endl;
            size_t dec_point = str.find(".");

            if(dec_point != std::string::npos)
            {
                int precision = str.length() - dec_point - 1;
                if(str[str.length() - 1] == 'f')
                    precision--;
                std::cout << "float: " << std::fixed << std::setprecision(precision)
                    << fvalue << "f" << std::endl;
            }
            else
            {
                if(str[str.length() - 1] == 'f')
                    std::cout << "float: " << fvalue << std::endl;
                else
                    std::cout << "float: " << fvalue << ".0f" << std::endl;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::string tmp = str;
            if(tmp[tmp.length() - 1] == 'f')
                tmp = tmp.substr(0, tmp.length() - 1);
            double d_val = static_cast<double>(convertToDouble(tmp));
            size_t dec_point = tmp.find(".");
            if(dec_point != std::string::npos)
            {
                int precision = tmp.length() - dec_point - 1;
                if(precision > 15)
                    precision = 15;
                std::cout << "double: " << std::fixed << std::setprecision(precision) << d_val << std::endl;
            }
            else
                std::cout << "double: " << d_val << ".0" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        
        
    }    
}

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter &c_Scalar)
{
    if(this != &c_Scalar)
        *this = c_Scalar;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &c_Scalar)
{
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    
}

