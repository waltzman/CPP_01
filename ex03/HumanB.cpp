/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:37:14 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 14:07:01 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB(){
	std::cout << this->_name << " is dead!" << std::endl;
}

void HumanB::attack() {
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " <<_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon&  weapon) {
	this->_weapon = &weapon;
}
