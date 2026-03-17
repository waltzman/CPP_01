/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:50:16 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/17 18:07:11 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	const int NUM_OF_ZOMBIES = 5;
	Zombie* zombies;

	zombies	= zombieHorde(NUM_OF_ZOMBIES, "Horde");

	if (!zombies)
		return (1);
	for (int i = 0; i < NUM_OF_ZOMBIES; i++) {
		std::cout << "Index " << i + 1 << ": ";
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);

}
