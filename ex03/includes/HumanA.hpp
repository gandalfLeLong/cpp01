/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:04:16 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 15:50:10 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
public:

    HumanA(const std::string str, Weapon& weapon);
    ~HumanA(void);
    void    attack(void) const;
    
private:
    std::string _name;
    Weapon&      _weapon;
};

#endif