/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:26 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/09 14:24:03 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
    
private:
    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
    typedef void(Harl::*fptr)(void);
    fptr   _functions[4];
};

#endif