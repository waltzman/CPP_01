/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   app.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 08:48:27 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/06 08:57:22 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APP_HPP
# define APP_HPP

# include <string>
# include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif

