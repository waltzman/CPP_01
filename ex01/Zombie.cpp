/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:42:49 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 08:59:48 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this -> name = name;
}

Zombie::~Zombie() {}

void Zombie::announce() {
	std::cout << "I am: " <<this->name << "!" << std::endl;
}
