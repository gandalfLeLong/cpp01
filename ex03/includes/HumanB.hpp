/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:05:19 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 16:00:31 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp" 

class HumanB
{
public:
    HumanB(const std::string str);
    ~HumanB();
    void    attack(void) const;
    void    setWeapon(Weapon& weapon);

private:
    std::string _name;
    Weapon*     _weapon;
};

#endif