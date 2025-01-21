/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 00:34:32 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/21 01:16:54 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    const int numZombies = 5;
    Zombie* horde = zombieHorde(numZombies, "Zombie");
    if (!horde)
    {
        std::cerr << "Failed to create the zombie horde." << std::endl;
        return 1;
    }
    for (int i = 0; i < numZombies; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    std::cout << "Zombie horde destroyed." << std::endl;
    return 0;
}