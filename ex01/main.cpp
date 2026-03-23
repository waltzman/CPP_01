/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:50:16 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 12:53:21 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {

	int NUM_OF_ZOMBIES = 5;
	Zombie* zombies;

	zombies	= zombieHorde(NUM_OF_ZOMBIES, "Zel");

	if (!zombies)
		return (1);
	for (int i = 0; i < NUM_OF_ZOMBIES; i++) {
		std::cout << i << ": ";
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);

}
