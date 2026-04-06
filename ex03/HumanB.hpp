/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:37:50 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 09:14:47 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
		Weapon *weapon;
		std::string type;
	public:
		HumanB(std::string type);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
};
#endif
