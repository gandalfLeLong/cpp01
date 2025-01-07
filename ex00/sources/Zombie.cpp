/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:54 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/07 15:59:57 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ()
{
    this->set_name("Foo");
    return;
}

Zombie::~Zombie ()
{
    return;
}

void    Zombie::set_name (std::string str)
{
    this->_name = str;
}

void    Zombie::announce () const
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}