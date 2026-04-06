/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:57:20 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 09:14:22 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string type_str, Weapon& weapon) : type(type_str), weapon(weapon)
{

}

HumanA::~HumanA()
{
	std::cout << this->type << " is dead!" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->type << " attacks with their " << weapon.getType() << std::endl;
}
