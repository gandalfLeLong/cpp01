/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:55:32 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 15:47:41 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();
    void                setType(std::string str);
    const std::string&  getType(void) const;

private:
    std::string _type;
};

#endif