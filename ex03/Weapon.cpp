/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:05:21 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 13:19:17 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const {
	return (_type);
}
