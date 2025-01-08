/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:07:56 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 10:56:59 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie* zombieArray;
	
	if (N < 1)
		return (NULL);
	zombieArray = new Zombie[N];
	while (i < N)
	{
		zombieArray[i].setName(name);
		i++;
	}
	return (zombieArray);
}