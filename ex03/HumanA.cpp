/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:57:20 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 12:55:55 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{
	std::cout << _name << ":is dead";
}

void HumanA::attack()
{
	std::cout << _name << "attavks with their " << _weapon.getType() << std::endl;
}
