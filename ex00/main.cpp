/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:38:34 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 08:51:22 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "app.hpp"

int main(void)
{
	Zombie *z;

	z = newZombie("New Zombie");
	z->announce();
	randomChump("Random Zombie");
	delete z;
	return (0);
}
