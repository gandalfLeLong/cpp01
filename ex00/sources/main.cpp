/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:08:42 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/07 19:01:14 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	Zombie	*zombieAdd;
		
	zombie1.announce();
	zombieAdd = newZombie("Choo");
	zombieAdd->announce();
	delete zombieAdd;
	randomChump("Boo");
	randomChump("Voodoo");
}