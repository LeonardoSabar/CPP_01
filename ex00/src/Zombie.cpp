/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:16:37 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/26 11:55:17 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed." << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << " has been created." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": " << G << "BraiiiiiiinnnzzzZ..." << RST << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
