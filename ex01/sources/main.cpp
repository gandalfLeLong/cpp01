/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:47:51 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 11:02:01 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int     i = 0;
    int     nbZombie = 12;
    Zombie* zombiePtr;
    
    zombiePtr = zombieHorde(nbZombie, "carlie");
    while (i < nbZombie)
        zombiePtr[i++].announce();
    delete[] zombiePtr;
}