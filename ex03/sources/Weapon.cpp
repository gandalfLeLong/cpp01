/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:00:41 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 15:48:05 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon()
{
    return;
}

void    Weapon::setType(std::string str)
{
    this->_type = str;
}

const std::string&  Weapon::getType(void) const
{
    return (this->_type);
}