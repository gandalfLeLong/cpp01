/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:54 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 11:01:30 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
    std::cout  << "A zombie is born." << std::endl;
    return;
}

Zombie::~Zombie ()
{
    std::cout << this->_name << " is dead." << std::endl;
    return;
}

void    Zombie::setName (std::string name)
{
    this->_name = name;
    return;
}

void    Zombie::announce () const
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}