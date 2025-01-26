/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:18:13 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/25 21:18:13 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of string variable:      " << &brain << std::endl;
    std::cout << "Address held by stringPTR:       " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:       " << &stringREF << std::endl;

    std::cout << "Value of the string variable:    " << brain << std::endl;
    std::cout << "Value pointed by stringPTR:      " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF:      " << stringREF << std::endl;
    return 0;
}