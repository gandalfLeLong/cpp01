/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:51 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/07 15:58:12 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
public:

        Zombie(void);
        Zombie(std::string);
        ~Zombie(void);
        void    announce(void) const;

private:

        std::string _name;
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif 