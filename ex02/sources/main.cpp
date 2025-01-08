/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:06:41 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/08 12:44:13 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string     s1 = "HI THIS IS BRAIN";
    std::string*    stringPTR = &s1;
    std::string&    stringREF = s1;

    std::cout << "s1 addresse : " << &s1 << std::endl;
    std::cout << "string ptr : " << stringPTR << std::endl;
    std::cout << "string reference : " << &stringREF << std::endl;

    std::cout << "s1 value : " << s1 << std::endl;
    std::cout << "string ptr dereferenced : " << *stringPTR << std::endl;
    std::cout << "string reference value " << stringREF << std::endl;
    return (0);
}