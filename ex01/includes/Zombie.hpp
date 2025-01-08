/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:49:51 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 10:44:59 by cmathot          ###   ########.fr       */
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
        ~Zombie(void);
        void    setName(std::string name);
        void    announce(void) const;

private:

        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif 