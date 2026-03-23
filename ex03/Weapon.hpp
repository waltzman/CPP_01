/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:00:52 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/23 13:00:41 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
class Weapon{
	private:
		std::string type;

	public:
		Weapon(std::string type_name);
		~Weapon();

		// Member functions
		void setType(std::string type_name);
		const std::string& getType(void) const;
};

#endif

