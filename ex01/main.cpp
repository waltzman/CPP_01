/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:50:16 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/16 17:54:11 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	const int NUM = 5;
	Zombie* zombie = zombieHorde(N, "zombie");

	int i = 0;
	while (i < N) {
		zombie[i++].announce();
	}
	
	delete[] zombie;
	return (0);

}
