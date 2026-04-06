/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:37:14 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 09:22:42 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string type_str) : type(type_str) {
	weapon = NULL;

}

HumanB::~HumanB(){
	std::cout << this-> type << " is dead!" << std::endl;
}

void HumanB::attack() {
	if (weapon != NULL)
		std::cout << type << " attacks with their " <<weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon&  weapon) {
	this->weapon = &weapon;
}
