/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:54 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/07 19:05:24 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
    this->_name = "Foo";
    std::cout << this->_name << " is born." << std::endl;
    return;
}

Zombie::Zombie (std::string str)
{
    this->_name = str;
    std::cout << str << " is born." << std::endl;
    return; 
}

Zombie::~Zombie ()
{
    std::cout << this->_name << " is dead." << std::endl;
    return;
}

void    Zombie::announce () const
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}