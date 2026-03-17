/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:38:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/16 16:28:37 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombie;

	newZombie = new Zombie("New Zombie");
	newZombie->announce();
	randomChump("Random Zombie");
	delete newZombie;
	return (0);
}
