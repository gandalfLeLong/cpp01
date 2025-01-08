/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:13:24 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 15:43:20 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon  baseballBat("Baseball bat");
        
        HumanA  bob("Bob", baseballBat);
        bob.attack();
        baseballBat.setType("A bigger baseball bat");
        bob.attack();
    }
    {
        Weapon  gun = Weapon("45 millimeter");
        
        HumanB  johny("Johny");
        johny.setWeapon(gun);
        johny.attack();
        gun.setType("22 millimeter");
        johny.attack();
    }
}