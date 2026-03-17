/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtions.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:34:56 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/17 16:41:25 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {

	Zombie *newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}
void randomChump(std::string name) {
	Zombie zombieChump(name);
	zombieChump.announce();
}
