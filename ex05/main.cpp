/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:17:51 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/25 16:17:51 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nINFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nWARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    harl.complain("SILLY");

    return 0;
}