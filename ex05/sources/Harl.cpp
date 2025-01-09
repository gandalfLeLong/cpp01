/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:45:48 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/09 15:41:03 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    this->_functions[0] = &Harl::_debug;
    this->_functions[1] = &Harl::_info;
    this->_functions[2] = &Harl::_warning;
    this->_functions[3] = &Harl::_error;
}

Harl::~Harl()
{
}

void    Harl::complain(std::string level)
{
    int         i = 0;
    std::string levels[4] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*_functions[i])();
            break;
        }
        i++;
    }
    if (i == 4)
        std::cerr << "Error: invalid error level" << std::endl;
}

void    Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!!" << std::endl;
}

void    Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}