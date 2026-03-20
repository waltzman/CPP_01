/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:37:50 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/20 13:56:08 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
};
#endif
