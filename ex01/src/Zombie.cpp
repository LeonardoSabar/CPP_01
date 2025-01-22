/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:40:35 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/22 13:36:03 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cerr << "Error: Invalid number of zombies." << std::endl;
        return NULL;
    }

    Zombie *zombies = new (std::nothrow) Zombie[N];
    if (!zombies)
    {
        std::cerr << "Error: Memory allocation failed." << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return zombies;
}