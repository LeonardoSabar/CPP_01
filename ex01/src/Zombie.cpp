/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:40:35 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/26 12:12:57 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << name << " has been created." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << _name << " A zombie has been created." << std::endl;
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
