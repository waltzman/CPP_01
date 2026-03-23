/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:00:43 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 12:07:15 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <new>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
