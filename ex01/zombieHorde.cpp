/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:52:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/17 17:58:04 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieHorde[i] = Zombie(name);
	}

	return (zombieHorde);
}
