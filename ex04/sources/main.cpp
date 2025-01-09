/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:01:49 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/09 12:48:39 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong numbers of arguments." << std::endl;
		return (1);
	}
	Replace instance(av[1], av[2], av[3]);
	instance.openFile();
	instance.replaceString();
	instance.writeFile();
	return (0);
}