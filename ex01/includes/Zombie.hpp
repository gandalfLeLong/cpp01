/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:51 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/07 20:09:03 by cmathot          ###   ########.fr       */
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

Zombie* zombieHorde(int n, std::string name);

#endif 