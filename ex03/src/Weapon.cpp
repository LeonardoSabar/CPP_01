/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:40:53 by leobarbo          #+#    #+#             */
/*   Updated: 2025/01/23 00:57:47 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}


Weapon::~Weapon(void){}


const std::string &Weapon::getType(void) const
{
    return (type);
}


void Weapon::setType(const std::string &type)
{
   this->type = type;
}