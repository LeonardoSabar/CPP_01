/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 00:11:03 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/26 12:11:57 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string _name)
{
	Zombie* zombie = new Zombie(_name);
	if (!zombie)
	{
		std::cerr << "Error: Memory allocation failed." << std::endl;
		return NULL;
	}
	zombie->setName(_name);
	zombie->announce();
	return zombie;
}
