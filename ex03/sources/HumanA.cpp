/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:24:20 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 16:03:21 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string str, Weapon& weapon) : _name(str), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
}