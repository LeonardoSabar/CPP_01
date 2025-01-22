/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:44:03 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/22 13:43:42 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int numZombies = 5;
    Zombie *horde = zombieHorde(numZombies, "Zombie");

    if (!horde)
    {
        std::cerr << "Error: Failed to create zombie horde." << std::endl;
        return 1;
    }
    for (int i = 0; i < numZombies; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}