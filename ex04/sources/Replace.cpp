/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:16:14 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/09 13:06:41 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filepath, std::string s1, std::string s2) : \
_filepath(filepath), _s1(s1), _s2(s2)
{
    return ;
}

Replace::~Replace()
{
    return ;
}

void    Replace::openFile(void)
{
    std::fstream       file(this->_filepath.c_str());
    std::stringstream   buffer;

    if (!file.is_open())
    {
        std::cerr << "Error: Cannot open file : " << this->_filepath + "." << std::endl;
        exit (1);
    }
    file.seekg(0, file.end);
    if (file.tellg() == 0)
    {
        std::cerr << "Error: " << this->_filepath << " is empty." << std::endl;
        exit (1);    
    }
    file.seekg(0, file.beg);
    buffer << file.rdbuf();
    this->_fileInString = buffer.str();
    file.close();
}

void    Replace::replaceString(void)
{
    size_t      pos = 0;
    size_t      next = 0;
    std::string res;
    
    if (this->_s1.empty())
    {
        std::cerr << "Error: s1 is an empty string." << std::endl;
        exit (1);
    }
    while (pos < this->_fileInString.length())
    {
        next = this->_fileInString.find(this->_s1, pos);
        if (next == std::string::npos)
        {
            res += this->_fileInString.substr(pos);
            break;
        }
        res += this->_fileInString.substr(pos, next - pos);
        res += this->_s2;
        pos = next + this->_s1.length();
    }
    this->_fileInString = res;
}

void    Replace::writeFile(void)
{
    std::string     outputFile = this->_filepath + ".replace";
    std::ofstream   file(outputFile.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open replace file.";
        exit (1);
    }
    file << this->_fileInString;
    file.close();
}