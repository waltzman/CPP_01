/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:37:14 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 13:12:10 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void HumanB::attack() {
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " <<_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon&  weapon) {
	_weapon = &weapon;
}
