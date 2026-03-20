/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:59:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/03/19 14:57:00 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>


class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif
