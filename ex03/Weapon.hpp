/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:00:52 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 12:53:10 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon();

		// Member functions
		void setType(std::string type);
		const std::string& getType(void);
};

#endif

