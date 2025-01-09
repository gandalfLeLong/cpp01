/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 22:59:23 by cmathot           #+#    #+#             */
/*   Updated: 2025/01/09 13:03:58 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <cstdlib>

class Replace
{
public:
    Replace(std::string filepath, std::string s1, std::string s2);
    ~Replace();
    void    openFile(void);
    void    replaceString(void);
    void    writeFile(void);
    
private:
    std::string _filepath;
    std::string _s1;
    std::string _s2;
    std::string _fileInString;
};

#endif