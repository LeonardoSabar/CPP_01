/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:40:35 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/22 14:09:48 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Unnamed Zombie")
{
    std::cout << _name << " has been created." << std::endl;
}


void Zombie::announce(void) const
{
    std::cout << _name << ": " << G << "BraiiiiiiinnnzzzZ..." << RST << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " is destroyed." << std::endl;
}