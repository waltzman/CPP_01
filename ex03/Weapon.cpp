/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:05:21 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 13:00:06 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_name) {
	type = type_name;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type_name)
{
	this->type = type_name;
}

const std::string &Weapon::getType() const {
	return (this->type);
}
